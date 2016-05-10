#include <gtk/gtk.h>
#include <math.h>
#include <string.h>
#include "config.h"

#define KEP_ATTACH(o, x, y) gtk_table_attach_defaults(GTK_TABLE(kepesseg_tabla), o, x, x + 1, y, y + 1)
#define ATTACH(o, x, y) gtk_table_attach_defaults(GTK_TABLE(tabla), o, x, x + 1, y, y + 1)
#define HE_ATTACH(o, x, y) gtk_table_attach_defaults(GTK_TABLE(harcertekek_tabla), o, x, x + 1, y, y + 1)
#define EE_ATTACH(o, x, y) gtk_table_attach_defaults(GTK_TABLE(eletero_tabla), o, x, x + 1, y, y + 1)
#define MA_ATTACH(o, x, y) gtk_table_attach_defaults(GTK_TABLE(magia_tabla), o, x, x + 1, y, y + 1)
#define ADJ gtk_adjustment_new(3.0, 3.0, 100.0, 1.0, 5.0, 1.0)
#define HE_ADJ gtk_adjustment_new(0.0, 0.0, 100.0, 1.0, 5.0, 1.0)
#define NEW_SPIN gtk_spin_button_new(GTK_ADJUSTMENT(ADJ), 1, 0)
#define NEW_HE_SPIN gtk_spin_button_new(GTK_ADJUSTMENT(HE_ADJ), 1, 0)
#define SIGNAL(x) gtk_signal_connect(GTK_OBJECT(x), "output", GTK_SIGNAL_FUNC(spin_valtozott), NULL)

GtkWidget *kap_ertek,
		  *ero_spin,
		  *gyorsasag_spin,
		  *ugyesseg_spin,
		  *allokepesseg_spin,
		  *egeszseg_spin,
		  *szepseg_spin,
		  *intelligencia_spin,
		  *akaratero_spin,
		  *asztral_spin,
		  *erzekeles_spin,
		  *ke_spin,
		  *te_spin,
		  *ve_spin,
		  *ce_spin,
		  *epalap_spin,
		  *fpalap_spin,
		  *mpalap_spin,
		  *ppalap_spin;
gint aktiv_kap;

gint convert_string(char *from_string, char **to_string);
void update_kap();

void
main_window_destroy(GtkWidget *window, gpointer data)
{
	gtk_main_quit();
}

void
set_kap_ertek()
{
	gchar *ertek;
	int len;

	if (aktiv_kap < 0)
	{
		convert_string("Érvénytelen karakter!", &buf);
		gtk_entry_set_text(GTK_ENTRY(kap_ertek), buf);
		return;
	}

	if (aktiv_kap == 0)
	{
		ertek = "0";
	}
	else
	{
		len = (int)log10((double)aktiv_kap) + 2;
		ertek = g_malloc(len);
		memset(ertek, 0, len);
		sprintf(ertek, "%d", aktiv_kap);
	}
	gtk_entry_set_text(GTK_ENTRY(kap_ertek), (const gchar *)ertek);
}

gboolean
spin_valtozott(GtkSpinButton *melyik, gpointer arg1, gpointer data)
{
	update_kap();

	return FALSE;
}

int
main(int argc, char **argv)
{
	GtkWidget *main_window,
			  *kepesseg_tabla,
			  *kepesseg_keret,
			  *tabla,
			  *kap_box,
			  *harcertekek_keret,
			  *harcertekek_tabla,
			  *eletero_keret,
			  *eletero_tabla,
			  *magia_keret,
			  *magia_tabla;

	aktiv_kap = KEZDO_KAP;

	gtk_init(&argc, &argv);

	main_window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_signal_connect(GTK_OBJECT(main_window), "destroy", GTK_SIGNAL_FUNC(main_window_destroy), NULL);

	tabla = gtk_table_new(4, 2, FALSE);
	kepesseg_tabla = gtk_table_new(10, 2, FALSE);
	harcertekek_tabla = gtk_table_new(4, 2, FALSE);
	eletero_tabla = gtk_table_new(2, 2, FALSE);
	magia_tabla = gtk_table_new(2, 2, FALSE);

	kap_box = gtk_hbox_new(FALSE, 0);
	gtk_box_pack_start(GTK_BOX(kap_box), gtk_label_new("KAP:"), FALSE, FALSE, 0);
	gtk_box_pack_start(GTK_BOX(kap_box), (kap_ertek = gtk_entry_new()), FALSE, FALSE, 0);
	gtk_entry_set_editable(GTK_ENTRY(kap_ertek), FALSE);

	CONVERT("Erõ:");
	KEP_ATTACH(gtk_label_new(buf), 0, 1);
	KEP_ATTACH((ero_spin = NEW_SPIN), 1, 1);
	SIGNAL(ero_spin);

	CONVERT("Gyorsaság:");
	KEP_ATTACH(gtk_label_new(buf), 0, 2);
	KEP_ATTACH((gyorsasag_spin = NEW_SPIN), 1, 2);
	SIGNAL(gyorsasag_spin);

	CONVERT("Ügyesség:");
	KEP_ATTACH(gtk_label_new(buf), 0, 3);
	KEP_ATTACH((ugyesseg_spin = NEW_SPIN), 1, 3);
	SIGNAL(ugyesseg_spin);

	CONVERT("Állóképesség:");
	KEP_ATTACH(gtk_label_new(buf), 0, 4);
	KEP_ATTACH((allokepesseg_spin = NEW_SPIN), 1, 4);
	SIGNAL(allokepesseg_spin);

	CONVERT("Egészség:");
	KEP_ATTACH(gtk_label_new(buf), 0, 5);
	KEP_ATTACH((egeszseg_spin = NEW_SPIN), 1, 5);
	SIGNAL(egeszseg_spin);

	CONVERT("Szépség:");
	KEP_ATTACH(gtk_label_new(buf), 0, 6);
	KEP_ATTACH((szepseg_spin = NEW_SPIN), 1, 6);
	SIGNAL(szepseg_spin);

	KEP_ATTACH(gtk_label_new("Intelligencia:"), 0, 7);
	KEP_ATTACH((intelligencia_spin = NEW_SPIN), 1, 7);
	SIGNAL(intelligencia_spin);

	CONVERT("Akaraterõ:");
	KEP_ATTACH(gtk_label_new(buf), 0, 8);
	KEP_ATTACH((akaratero_spin = NEW_SPIN), 1, 8);
	SIGNAL(akaratero_spin);

	CONVERT("Asztrál:");
	KEP_ATTACH(gtk_label_new(buf), 0, 9);
	KEP_ATTACH((asztral_spin = NEW_SPIN), 1, 9);
	SIGNAL(asztral_spin);

	CONVERT("Érzékelés:");
	KEP_ATTACH(gtk_label_new(buf), 0, 10);
	KEP_ATTACH((erzekeles_spin = NEW_SPIN), 1, 10);
	SIGNAL(erzekeles_spin);

	CONVERT("KÉ:");
	HE_ATTACH(gtk_label_new(buf), 0, 0);
	HE_ATTACH((ke_spin = NEW_HE_SPIN), 1, 0);
	SIGNAL(ke_spin);

	CONVERT("TÉ:");
	HE_ATTACH(gtk_label_new(buf), 0, 1);
	HE_ATTACH((te_spin = NEW_HE_SPIN), 1, 1);
	SIGNAL(te_spin);

	CONVERT("VÉ:");
	HE_ATTACH(gtk_label_new(buf), 0, 2);
	HE_ATTACH((ve_spin = NEW_HE_SPIN), 1, 2);
	SIGNAL(ve_spin);

	CONVERT("CÉ:");
	HE_ATTACH(gtk_label_new(buf), 0, 3);
	HE_ATTACH((ce_spin = NEW_HE_SPIN), 1, 3);
	SIGNAL(ce_spin);

	CONVERT("Ép alap:");
	EE_ATTACH(gtk_label_new(buf), 0, 0);
	EE_ATTACH((epalap_spin = NEW_HE_SPIN), 1, 0);
	SIGNAL(epalap_spin);

	EE_ATTACH(gtk_label_new("Fp alap:"), 0, 1);
	EE_ATTACH((fpalap_spin = NEW_HE_SPIN), 1, 1);
	SIGNAL(fpalap_spin);

	MA_ATTACH(gtk_label_new("Mp alap:"), 0, 0);
	MA_ATTACH((mpalap_spin = NEW_HE_SPIN), 1, 0);
	SIGNAL(mpalap_spin);

	MA_ATTACH(gtk_label_new("Pszi alap:"), 0, 1);
	MA_ATTACH((ppalap_spin = NEW_HE_SPIN), 1, 1);
	SIGNAL(ppalap_spin);

	CONVERT("Képességek");
	kepesseg_keret = gtk_frame_new((const gchar *)buf);

	CONVERT("Harcértékek");
	harcertekek_keret = gtk_frame_new((const gchar *)buf);

	CONVERT("Életerõ");
	eletero_keret = gtk_frame_new((const gchar *)buf);

	CONVERT("Mágia, pszi");
	magia_keret = gtk_frame_new((const gchar *)buf);

	ATTACH(kap_box, 0, 0);
	gtk_table_attach_defaults(GTK_TABLE(tabla), kepesseg_keret, 0, 1, 1, 4);
	ATTACH(harcertekek_keret, 1, 1);
	ATTACH(eletero_keret, 1, 2);
	ATTACH(magia_keret, 1, 3);

	gtk_container_add(GTK_CONTAINER(harcertekek_keret), harcertekek_tabla);
	gtk_container_add(GTK_CONTAINER(kepesseg_keret), kepesseg_tabla);
	gtk_container_add(GTK_CONTAINER(eletero_keret), eletero_tabla);
	gtk_container_add(GTK_CONTAINER(magia_keret), magia_tabla);
	gtk_container_add(GTK_CONTAINER(main_window), tabla);

	gtk_widget_show_all(main_window);

	set_kap_ertek();

	gtk_main();

	return 0;
}

