/*
 * vim:encoding=utf-8:
 * Menü:
 * 
 * * Karakter
 * *** Új       -- Ekkor kerül elő a karaktergeneráló panel, és el lehet osztani a 375 KAP-ot
 * *** Betöltés -- Ez betölti a karakter adatait
 * *** Mentés   -- Ez kimenti egy előre meghatározott formátumú file-ba a karakter adatait
 * *** Kilépés  -- Ez meg kilép a probramból ;)
 */
#include <gtk/gtk.h>
#include <libxml/xmlversion.h>
#include <libxml/parser.h>

#include "functions.h"
#include "defines.h"

GtkWidget *main_window,
		  *book;
GtkActionGroup *action_group;

static GtkRadioActionEntry
menu_items[] = {
	{ "egybol-lathato",        NULL, EGYBOL_LATHATO_HALLHATO_DOLGOK, NULL, NULL, 1  },
	{ "jatekos-es-karakter",   NULL, A_JATEKOS_ES_A_KARAKTER_ADATAI, NULL, NULL, 2  },
	{ "kepessegek",            NULL, KEPESSEGEK,                     NULL, NULL, 3  },
	{ "fobb-adatok",           NULL, A_KARAKTER_FOBB_ADATAI,         NULL, NULL, 4  },
	{ "megjelenes",            NULL, MEGJELENES,                     NULL, NULL, 5  },
	{ "allando-erzelmek",      NULL, ALLANDO_ERZELMEK,               NULL, NULL, 6  },
	{ "szimpatia",             NULL, SZIMPATIKUS_VISZONYOK,          NULL, NULL, 7  },
	{ "ismertseg",             NULL, ISMERTSEG,                      NULL, NULL, 8  },
	{ "kulonleges-kepessegek", NULL, KULONLEGES_KEPESSEGEK,          NULL, NULL, 9  },
	{ "tapasztalati-pontok",   NULL, TAPASZTALATI_PONTOK,            NULL, NULL, 10 },
	{ "kepzettsegek",          NULL, KEPZETTSEGEK,                   NULL, NULL, 11 },
	{ "nyelvek",               NULL, NYELVEK,                        NULL, NULL, 12 },
	{ "harcertekek",           NULL, HARCERTEKEK,                    NULL, NULL, 13 },
	{ "eletero",               NULL, ELETERO,                        NULL, NULL, 14 },
	{ "pszi",                  NULL, PSZI,                           NULL, NULL, 15 },
	{ "magia",                 NULL, MAGIA,                          NULL, NULL, 16 },
	{ "fegyverek",             NULL, FEGYVEREK_PAJZS,                NULL, NULL, 17 },
	{ "allatok",               NULL, ALLATOK_CSATLOSOK,              NULL, NULL, 18 },
	{ "mesterek",              NULL, MESTEREK,                       NULL, NULL, 19 },
	{ "birtokok",              NULL, BIRTOKOK_BEFEKTETESEK,          NULL, NULL, 20 },
	{ "alakulatok",            NULL, ALAKULATOK,                     NULL, NULL, 21 },
	{ "iskolak",               NULL, ISKOLAK,                        NULL, NULL, 22 },
	{ "muvek",                 NULL, MUVEK,                          NULL, NULL, 23 },
	{ "ertekek",               NULL, ERTEKEK,                        NULL, NULL, 24 },
	{ "ruhak",                 NULL, RUHAK,                          NULL, NULL, 25 },
	{ "varazstargyak",         NULL, VARAZSTARGYAK,                  NULL, NULL, 26 },
	{ "felszereles",           NULL, FELSZERELES,                    NULL, NULL, 27 },
	{ "varazslatok",           NULL, VARAZSLATOK,                    NULL, NULL, 28 },
	{ "tanulas",               NULL, TANULAS,                        NULL, NULL, 29 },
	{ "sebesulesek",           NULL, SEBESULESEK,                    NULL, NULL, 30 },
	{ "betegsegek",            NULL, BETEGSEGEK,                     NULL, NULL, 31 },
	{ "varazslat-kutatas",     NULL, VARAZSLAT_KUTATAS,              NULL, NULL, 32 },
	{ "kulonleges-dolgok",     NULL, KULONLEGES_DOLGOK,              NULL, NULL, 33 },
	{ "megjegyzesek",          NULL, MEGJEGYZESEK,                   NULL, NULL, 34 },
	{ "tortenet",              NULL, TORTENET,                       NULL, NULL, 35 },
	{ "kepek",                 NULL, KEPEK,                          NULL, NULL, 36 },
};

static gint
nezet_menu_szama = sizeof(menu_items) / sizeof(menu_items[0]);

void
main_window_destroy(GtkWidget *window, gpointer data)
{
	gtk_main_quit();
}

void
kilepes_func(GtkAction *action, gpointer data)
{
	/* TODO: Ide kell majd egy ellenőrzés, hogy az aktív karakter el van-e mentve */
	g_signal_emit_by_name(G_OBJECT(main_window), "destroy", NULL);
}

void
nezet_menu(GtkAction *action, gint melyik, gpointer data)
{
	gtk_notebook_set_current_page(GTK_NOTEBOOK(book), gtk_radio_action_get_current_value(GTK_RADIO_ACTION(action)) - 1);
}

void
lapvaltas(GtkNotebook *book, gint arg1, gpointer data)
{
	/* TODO: Ide kéne egy működő kód, ami megváltoztatja a kijelölt menüpontot... */
	gtk_action_activate(gtk_action_group_get_action(action_group, menu_items[gtk_notebook_get_current_page(book)].name));
}

int
main(int argc, char **argv)
{
	GtkWidget *menubar,
			  *pri_vbox,
			  *tabla,
			  *scroll;
	GtkAccelGroup *accel_group;
	GtkUIManager *ui_manager;
	GtkAction *action;

	LIBXML_TEST_VERSION

	karakter_betoltes("ruin.xml");
	//return 0;

	gtk_init(&argc, &argv);

	action_group = gtk_action_group_new("main_menu");

	action = gtk_action_new("uj-karakter", "Új karakter", "Új karakter létrehozása", GTK_STOCK_NEW);
	gtk_action_group_add_action_with_accel(action_group, action, "<Control>N");

	action = gtk_action_new("karakter-megnyitas", "Karakter megnyitása", "Elmentett karakter megnyitása", GTK_STOCK_OPEN);
	gtk_action_group_add_action_with_accel(action_group, action, "<Control>O");

	action = gtk_action_new("karakter-mentes", "Karakter mentése", "Karakter adatainak mentése", GTK_STOCK_SAVE);
	gtk_action_group_add_action_with_accel(action_group, action, "<Control>S");

	action = gtk_action_new("kilepes", "Kilépés", "Kilépés a programból", GTK_STOCK_QUIT);
	gtk_action_group_add_action_with_accel(action_group, action, "<Control>Q");
	g_signal_connect(G_OBJECT(action), "activate", G_CALLBACK(kilepes_func), NULL);

	action = gtk_action_new("karakter-menu", "Karakter", "Karakter", NULL);
	gtk_action_group_add_action(action_group, action);

	gtk_action_group_add_radio_actions(action_group, menu_items, nezet_menu_szama, 0, G_CALLBACK(nezet_menu), NULL);
	action = gtk_action_new("nezet-menu", "Nézet", "Nézet", NULL);
	gtk_action_group_add_action(action_group, action);

	ui_manager = gtk_ui_manager_new();
	gtk_ui_manager_set_add_tearoffs(ui_manager, FALSE);
	gtk_ui_manager_insert_action_group(ui_manager, action_group, 0);
	gtk_ui_manager_add_ui_from_file(ui_manager, "magus_kargen_res.ui", NULL);

	accel_group = gtk_accel_group_new();

	main_window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	g_signal_connect(G_OBJECT(main_window), "destroy", G_SIGNAL_FUNC(main_window_destroy), NULL);
	gtk_window_add_accel_group(GTK_WINDOW(main_window), accel_group);
	gtk_window_set_title(GTK_WINDOW(main_window), "M.A.G.U.S. - Reneszánsz karakternyilvántartó");

	menubar = gtk_ui_manager_get_widget(ui_manager, "/menu");

	book = gtk_notebook_new();
	gtk_notebook_set_scrollable(GTK_NOTEBOOK(book), TRUE);
	gtk_notebook_popup_enable(GTK_NOTEBOOK(book));
	g_signal_connect(GTK_OBJECT(book), "change-current-page", G_SIGNAL_FUNC(lapvaltas), NULL);

	/* Azonnal látható és hallható dolgok */
	scroll = gtk_scrolled_window_new(NULL, NULL);
	tabla = gtk_table_new(18, 2, FALSE);
	azonnal_lathato_dolgok_lap(GTK_TABLE(tabla));
	gtk_scrolled_window_add_with_viewport(GTK_SCROLLED_WINDOW(scroll), tabla);
	gtk_notebook_append_page(GTK_NOTEBOOK(book), scroll, gtk_label_new(EGYBOL_LATHATO_HALLHATO_DOLGOK));

	/* A játékos és a karakter adatai */
	scroll = gtk_scrolled_window_new(NULL, NULL);
	tabla = gtk_table_new(4, 2, FALSE);
	jatekos_es_karakter_lap(GTK_TABLE(tabla));
	gtk_scrolled_window_add_with_viewport(GTK_SCROLLED_WINDOW(scroll), tabla);
	gtk_notebook_append_page(GTK_NOTEBOOK(book), scroll, gtk_label_new(A_JATEKOS_ES_A_KARAKTER_ADATAI));

	/* Képességek */
	scroll = gtk_scrolled_window_new(NULL, NULL);
	tabla = gtk_table_new(10, 2, FALSE);
	kepessegek_lap(GTK_TABLE(tabla));
	gtk_scrolled_window_add_with_viewport(GTK_SCROLLED_WINDOW(scroll), tabla);
	gtk_notebook_append_page(GTK_NOTEBOOK(book), scroll, gtk_label_new(KEPESSEGEK));

	/* Főbb adatok */
	scroll = gtk_scrolled_window_new(NULL, NULL);
	tabla = gtk_table_new(26, 4, FALSE);
	fobb_adatok_lap(GTK_TABLE(tabla));
	gtk_scrolled_window_add_with_viewport(GTK_SCROLLED_WINDOW(scroll), tabla);
	gtk_notebook_append_page(GTK_NOTEBOOK(book), scroll, gtk_label_new(A_KARAKTER_FOBB_ADATAI));

	/* Megjelenés */
	scroll = gtk_scrolled_window_new(NULL, NULL);
	tabla = gtk_table_new(10, 4, FALSE);
	megjelenes_lap(GTK_TABLE(tabla));
	gtk_scrolled_window_add_with_viewport(GTK_SCROLLED_WINDOW(scroll), tabla);
	gtk_notebook_append_page(GTK_NOTEBOOK(book), scroll, gtk_label_new(MEGJELENES));

	/* Állandó érzelmek */
	scroll = gtk_scrolled_window_new(NULL, NULL);
	tabla = gtk_table_new(15, 2, FALSE);
	erzelmek_lap(GTK_TABLE(tabla));
	gtk_scrolled_window_add_with_viewport(GTK_SCROLLED_WINDOW(scroll), tabla);
	gtk_notebook_append_page(GTK_NOTEBOOK(book), scroll, gtk_label_new(ALLANDO_ERZELMEK));

	/* Szimpatikus viszonyok. Ide majd egy TableView kene */
	gtk_notebook_append_page(GTK_NOTEBOOK(book), gtk_table_new(1, 1, FALSE), gtk_label_new(SZIMPATIKUS_VISZONYOK));

	/* Kapcsolatok, ismertseg. Ide majd egy TableView kene */
	gtk_notebook_append_page(GTK_NOTEBOOK(book), gtk_table_new(1, 1, FALSE), gtk_label_new(ISMERTSEG));

	/* Kulonleges kepessegek, hatranyok. Ide is TableView kene */
	gtk_notebook_append_page(GTK_NOTEBOOK(book), gtk_table_new(1, 1, FALSE), gtk_label_new(KULONLEGES_KEPESSEGEK));

	/* Tapasztalati pontok, átváltás */
	scroll = gtk_scrolled_window_new(NULL, NULL);
	tabla = gtk_table_new(3, 2, FALSE);
	tapasztalat_lap(GTK_TABLE(tabla));
	gtk_scrolled_window_add_with_viewport(GTK_SCROLLED_WINDOW(scroll), tabla);
	gtk_notebook_append_page(GTK_NOTEBOOK(book), scroll, gtk_label_new(TAPASZTALATI_PONTOK));

	/* Képzettségek. Ide majd egy TableView kell */
	gtk_notebook_append_page(GTK_NOTEBOOK(book), gtk_table_new(1, 1, FALSE), gtk_label_new(KEPZETTSEGEK));

	/* Nyelvek. Ide is TableView */
	gtk_notebook_append_page(GTK_NOTEBOOK(book), gtk_table_new(1, 1, FALSE), gtk_label_new(NYELVEK));

	/* Harcértékek */
	scroll = gtk_scrolled_window_new(NULL, NULL);
	tabla = gtk_table_new(5, 4, FALSE);
	harcertekek_lap(GTK_TABLE(tabla));
	gtk_scrolled_window_add_with_viewport(GTK_SCROLLED_WINDOW(scroll), tabla);
	gtk_notebook_append_page(GTK_NOTEBOOK(book), scroll, gtk_label_new(HARCERTEKEK));

	/* Életerő */
	scroll = gtk_scrolled_window_new(NULL, NULL);
	tabla = gtk_table_new(3, 4, FALSE);
	eletero_lap(GTK_TABLE(tabla));
	gtk_scrolled_window_add_with_viewport(GTK_SCROLLED_WINDOW(scroll), tabla);
	gtk_notebook_append_page(GTK_NOTEBOOK(book), scroll, gtk_label_new(ELETERO));

	/* Pszi */
	scroll = gtk_scrolled_window_new(NULL, NULL);
	tabla = gtk_table_new(5, 2, FALSE);
	pszi_lap(GTK_TABLE(tabla));
	gtk_scrolled_window_add_with_viewport(GTK_SCROLLED_WINDOW(scroll), tabla);
	gtk_notebook_append_page(GTK_NOTEBOOK(book), scroll, gtk_label_new(PSZI));

	/* Mágia */
	gtk_notebook_append_page(GTK_NOTEBOOK(book), gtk_table_new(1, 1, FALSE), gtk_label_new(MAGIA));

	/* Fegyverek és pajzsok. Ide két TableView kell. */
	gtk_notebook_append_page(GTK_NOTEBOOK(book), gtk_table_new(1, 1, FALSE), gtk_label_new(FEGYVEREK_PAJZS));

	/* Állatok, csatlósok, szolgák. Ide sok TableView kell */
	gtk_notebook_append_page(GTK_NOTEBOOK(book), gtk_table_new(1, 1, FALSE), gtk_label_new(ALLATOK_CSATLOSOK));

	/* Mesterek és tanítók. Ide két TableView kell */
	gtk_notebook_append_page(GTK_NOTEBOOK(book), gtk_table_new(1, 1, FALSE), gtk_label_new(MESTEREK));

	/* Földbirtokok. Ide is TableView kell */
	gtk_notebook_append_page(GTK_NOTEBOOK(book), gtk_table_new(1, 1, FALSE), gtk_label_new(BIRTOKOK_BEFEKTETESEK));

	gtk_notebook_append_page(GTK_NOTEBOOK(book), gtk_table_new(1, 1, FALSE), gtk_label_new(ALAKULATOK));

	gtk_notebook_append_page(GTK_NOTEBOOK(book), gtk_table_new(1, 1, FALSE), gtk_label_new(ISKOLAK));

	gtk_notebook_append_page(GTK_NOTEBOOK(book), gtk_table_new(1, 1, FALSE), gtk_label_new(MUVEK));

	gtk_notebook_append_page(GTK_NOTEBOOK(book), gtk_table_new(1, 1, FALSE), gtk_label_new(ERTEKEK));

	gtk_notebook_append_page(GTK_NOTEBOOK(book), gtk_table_new(1, 1, FALSE), gtk_label_new(RUHAK));

	gtk_notebook_append_page(GTK_NOTEBOOK(book), gtk_table_new(1, 1, FALSE), gtk_label_new(VARAZSTARGYAK));

	gtk_notebook_append_page(GTK_NOTEBOOK(book), gtk_table_new(1, 1, FALSE), gtk_label_new(FELSZERELES));

	gtk_notebook_append_page(GTK_NOTEBOOK(book), gtk_table_new(1, 1, FALSE), gtk_label_new(VARAZSLATOK));

	gtk_notebook_append_page(GTK_NOTEBOOK(book), gtk_table_new(1, 1, FALSE), gtk_label_new(TANULAS));

	gtk_notebook_append_page(GTK_NOTEBOOK(book), gtk_table_new(1, 1, FALSE), gtk_label_new(SEBESULESEK));

	gtk_notebook_append_page(GTK_NOTEBOOK(book), gtk_table_new(1, 1, FALSE), gtk_label_new(BETEGSEGEK));

	gtk_notebook_append_page(GTK_NOTEBOOK(book), gtk_table_new(1, 1, FALSE), gtk_label_new(VARAZSLAT_KUTATAS));

	gtk_notebook_append_page(GTK_NOTEBOOK(book), gtk_table_new(1, 1, FALSE), gtk_label_new(KULONLEGES_DOLGOK));

	gtk_notebook_append_page(GTK_NOTEBOOK(book), gtk_table_new(1, 1, FALSE), gtk_label_new(MEGJEGYZESEK));

	gtk_notebook_append_page(GTK_NOTEBOOK(book), gtk_table_new(1, 1, FALSE), gtk_label_new(TORTENET));

	gtk_notebook_append_page(GTK_NOTEBOOK(book), gtk_table_new(1, 1, FALSE), gtk_label_new(KEPEK));

	pri_vbox = gtk_vbox_new(FALSE, 0);

	gtk_box_pack_start(GTK_BOX(pri_vbox), menubar, FALSE, FALSE, 0);
	gtk_box_pack_start(GTK_BOX(pri_vbox), book, TRUE, TRUE, 0);

	gtk_container_add(GTK_CONTAINER(main_window), pri_vbox);

	gtk_widget_show_all(main_window);
	gtk_window_maximize(GTK_WINDOW(main_window));

	gtk_main();

	xmlCleanupParser();

	return 0;
}

