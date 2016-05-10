#include <gtk/gtk.h>

void
azonnal_lathato_dolgok_lap(GtkTable *azonnal_tabla)
{
	GtkWidget *align;

	align = gtk_alignment_new(0, 0, 0, 0);
	gtk_container_add(GTK_CONTAINER(align), gtk_label_new("Faj"));
	gtk_table_attach(azonnal_tabla, align, 0, 1, 0, 1, GTK_FILL, 0, 2, 2);
	gtk_table_attach(azonnal_tabla, gtk_entry_new(), 1, 2, 0, 1, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(azonnal_tabla, gtk_label_new("Származás"), 0, 1, 1, 2, 0, 0, 2, 2);
	gtk_table_attach(azonnal_tabla, gtk_entry_new(), 1, 2, 1, 2, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(azonnal_tabla, gtk_label_new("Nem"), 0, 1, 2, 3, 0, 0, 2, 2);
	gtk_table_attach(azonnal_tabla, gtk_entry_new(), 1, 2, 2, 3, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(azonnal_tabla, gtk_label_new("Életkor"), 0, 1, 3, 4, 0, 0, 2, 2);
	gtk_table_attach(azonnal_tabla, gtk_entry_new(), 1, 2, 3, 4, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(azonnal_tabla, gtk_label_new("Egészségi állapot"), 0, 1, 4, 5, 0, 0, 2, 2);
	gtk_table_attach(azonnal_tabla, gtk_entry_new(), 1, 2, 4, 5, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(azonnal_tabla, gtk_label_new("Súly"), 0, 1, 5, 6, 0, 0, 2, 2);
	gtk_table_attach(azonnal_tabla, gtk_entry_new(), 1, 2, 5, 6, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(azonnal_tabla, gtk_label_new("Magasság"), 0, 1, 6, 7, 0, 0, 2, 2);
	gtk_table_attach(azonnal_tabla, gtk_entry_new(), 1, 2, 6, 7, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(azonnal_tabla, gtk_label_new("Szépség"), 0, 1, 7, 8, 0, 0, 2, 2);
	gtk_table_attach(azonnal_tabla, gtk_entry_new(), 1, 2, 7, 8, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(azonnal_tabla, gtk_label_new("Szemszín"), 0, 1, 8, 9, 0, 0, 2, 2);
	gtk_table_attach(azonnal_tabla, gtk_entry_new(), 1, 2, 8, 9, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(azonnal_tabla, gtk_label_new("Hajszín"), 0, 1, 9, 10, 0, 0, 2, 2);
	gtk_table_attach(azonnal_tabla, gtk_entry_new(), 1, 2, 9, 10, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(azonnal_tabla, gtk_label_new("Hajviselet"), 0, 1, 10, 11, 0, 0, 2, 2);
	gtk_table_attach(azonnal_tabla, gtk_entry_new(), 1, 2, 10, 11, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(azonnal_tabla, gtk_label_new("Ékszerek"), 0, 1, 11, 12, 0, 0, 2, 2);
	gtk_table_attach(azonnal_tabla, gtk_entry_new(), 1, 2, 11, 12, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(azonnal_tabla, gtk_label_new("Ruha stílusa"), 0, 1, 12, 13, 0, 0, 2, 2);
	gtk_table_attach(azonnal_tabla, gtk_entry_new(), 1, 2, 12, 13, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(azonnal_tabla, gtk_label_new("Ruha állapota"), 0, 1, 13, 14, 0, 0, 2, 2);
	gtk_table_attach(azonnal_tabla, gtk_entry_new(), 1, 2, 13, 14, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(azonnal_tabla, gtk_label_new("Parfüm stílusa"), 0, 1, 14, 15, 0, 0, 2, 2);
	gtk_table_attach(azonnal_tabla, gtk_entry_new(), 1, 2, 14, 15, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(azonnal_tabla, gtk_label_new("Beszédstílus"), 0, 1, 15, 16, 0, 0, 2, 2);
	gtk_table_attach(azonnal_tabla, gtk_entry_new(), 1, 2, 15, 16, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(azonnal_tabla, gtk_label_new("Akcentus"), 0, 1, 16, 17, 0, 0, 2, 2);
	gtk_table_attach(azonnal_tabla, gtk_entry_new(), 1, 2, 16, 17, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(azonnal_tabla, gtk_label_new("Ismertetőjel"), 0, 1, 17, 18, 0, 0, 2, 2);
	gtk_table_attach(azonnal_tabla, gtk_entry_new(), 1, 2, 17, 18, GTK_EXPAND | GTK_FILL, 0, 2, 2);
}

void
kepessegek_lap(GtkTable *kepessegek_tabla)
{
	gtk_table_attach(kepessegek_tabla, gtk_label_new("Erő"), 0, 1, 0, 1, 0, 0, 2, 2);
	gtk_table_attach(kepessegek_tabla, gtk_entry_new(), 1, 2, 0, 1, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(kepessegek_tabla, gtk_label_new("Gyorsaság"), 0, 1, 1, 2, 0, 0, 2, 2);
	gtk_table_attach(kepessegek_tabla, gtk_entry_new(), 1, 2, 1, 2, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(kepessegek_tabla, gtk_label_new("Ügyesség"), 0, 1, 2, 3, 0, 0, 2, 2);
	gtk_table_attach(kepessegek_tabla, gtk_entry_new(), 1, 2, 2, 3, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(kepessegek_tabla, gtk_label_new("Állóképesség"), 0, 1, 3, 4, 0, 0, 2, 2);
	gtk_table_attach(kepessegek_tabla, gtk_entry_new(), 1, 2, 3, 4, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(kepessegek_tabla, gtk_label_new("Egészség"), 0, 1, 4, 5, 0, 0, 2, 2);
	gtk_table_attach(kepessegek_tabla, gtk_entry_new(), 1, 2, 4, 5, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(kepessegek_tabla, gtk_label_new("Szépség"), 0, 1, 5, 6, 0, 0, 2, 2);
	gtk_table_attach(kepessegek_tabla, gtk_entry_new(), 1, 2, 5, 6, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(kepessegek_tabla, gtk_label_new("Intelligencia"), 0, 1, 6, 7, 0, 0, 2, 2);
	gtk_table_attach(kepessegek_tabla, gtk_entry_new(), 1, 2, 6, 7, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(kepessegek_tabla, gtk_label_new("Akaraterő"), 0, 1, 7, 8, 0, 0, 2, 2);
	gtk_table_attach(kepessegek_tabla, gtk_entry_new(), 1, 2, 7, 8, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(kepessegek_tabla, gtk_label_new("Asztrál"), 0, 1, 8, 9, 0, 0, 2, 2);
	gtk_table_attach(kepessegek_tabla, gtk_entry_new(), 1, 2, 8, 9, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(kepessegek_tabla, gtk_label_new("Érzékelés"), 0, 1, 9, 10, 0, 0, 2, 2);
	gtk_table_attach(kepessegek_tabla, gtk_entry_new(), 1, 2, 9, 10, GTK_EXPAND | GTK_FILL, 0, 2, 2);
}

void
jatekos_es_karakter_lap(GtkTable *jatekos_tabla)
{
	gtk_table_attach(jatekos_tabla, gtk_label_new("A játékos neve"), 0, 1, 0, 1, 0, 0, 2, 2);
	gtk_table_attach(jatekos_tabla, gtk_entry_new(), 1, 2, 0, 1, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(jatekos_tabla, gtk_label_new("Indítás dátuma"), 0, 1, 1, 2, 0, 0, 2, 2);
	gtk_table_attach(jatekos_tabla, gtk_entry_new(), 1, 2, 1, 2, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(jatekos_tabla, gtk_label_new("Karakter neve"), 0, 1, 2, 3, 0, 0, 2, 2);
	gtk_table_attach(jatekos_tabla, gtk_entry_new(), 1, 2, 2, 3, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(jatekos_tabla, gtk_label_new("Karakter faja"), 0, 1, 3, 4, 0, 0, 2, 2);
	gtk_table_attach(jatekos_tabla, gtk_combo_box_new(), 1, 2, 3, 4, GTK_EXPAND | GTK_FILL, 0, 2, 2);
}

void
fobb_adatok_lap(GtkTable *adat_tabla)
{
	gtk_table_attach(adat_tabla, gtk_label_new("A család neve"), 0, 1, 0, 1, 0, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_entry_new(), 1, 2, 0, 1, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(adat_tabla, gtk_label_new("A karakter álneve"), 0, 1, 1, 2, 0, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_entry_new(), 1, 2, 1, 2, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(adat_tabla, gtk_label_new("Apja neve"), 0, 1, 2, 3, 0, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_entry_new(), 1, 2, 2, 3, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(adat_tabla, gtk_label_new("Anyja neve"), 0, 1, 3, 4, 0, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_entry_new(), 1, 2, 3, 4, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(adat_tabla, gtk_label_new("Testvér(ek) neve(i)"), 0, 1, 4, 5, 0, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_combo_box_entry_new(), 1, 2, 4, 5, GTK_EXPAND | GTK_FILL, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_button_new_from_stock(GTK_STOCK_ADD), 2, 3, 4, 5, 0, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_button_new_from_stock(GTK_STOCK_REMOVE), 3, 4, 4, 5, 0, 0, 2, 2);

	gtk_table_attach(adat_tabla, gtk_label_new("Házastárs"), 0, 1, 5, 6, 0, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_entry_new(), 1, 2, 5, 6, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(adat_tabla, gtk_label_new("Gyermekek"), 0, 1, 6, 7, 0, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_combo_box_entry_new(), 1, 2, 6, 7, GTK_EXPAND | GTK_FILL, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_button_new_from_stock(GTK_STOCK_ADD), 2, 3, 6, 7, 0, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_button_new_from_stock(GTK_STOCK_REMOVE), 3, 4, 6, 7, 0, 0, 2, 2);

	gtk_table_attach(adat_tabla, gtk_label_new("Szeretők"), 0, 1, 7, 8, 0, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_combo_box_entry_new(), 1, 2, 7, 8, GTK_EXPAND | GTK_FILL, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_button_new_from_stock(GTK_STOCK_ADD), 2, 3, 7, 8, 0, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_button_new_from_stock(GTK_STOCK_REMOVE), 3, 4, 7, 8, 0, 0, 2, 2);

	gtk_table_attach(adat_tabla, gtk_hseparator_new(), 0, 4, 8, 9, GTK_EXPAND | GTK_FILL, 0, 2, 4);

	gtk_table_attach(adat_tabla, gtk_label_new("Szülőföld"), 0, 1, 9, 10, 0, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_entry_new(), 1, 2, 9, 10, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(adat_tabla, gtk_label_new("Származás"), 0, 1, 10, 11, 0, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_entry_new(), 1, 2, 10, 11, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(adat_tabla, gtk_label_new("Lakóhely"), 0, 1, 11, 12, 0, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_entry_new(), 1, 2, 11, 12, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(adat_tabla, gtk_label_new("Valós kor"), 0, 1, 12, 13, 0, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_entry_new(), 1, 2, 12, 13, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(adat_tabla, gtk_label_new("Látszólagos kor"), 0, 1, 13, 14, 0, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_entry_new(), 1, 2, 13, 14, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(adat_tabla, gtk_label_new("Születésnap"), 0, 1, 14, 15, 0, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_entry_new(), 1, 2, 14, 15, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(adat_tabla, gtk_label_new("Nem"), 0, 1, 15, 16, 0, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_combo_box_new(), 1, 2, 15, 16, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(adat_tabla, gtk_label_new("Klán/család"), 0, 1, 16, 17, 0, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_entry_new(), 1, 2, 16, 17, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(adat_tabla, gtk_hseparator_new(), 0, 4, 17, 18, GTK_EXPAND | GTK_FILL, 0, 2, 4);

	gtk_table_attach(adat_tabla, gtk_label_new("Jellem"), 0, 1, 18, 19, 0, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_combo_box_new(), 1, 2, 18, 19, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(adat_tabla, gtk_label_new("Vallás"), 0, 1, 19, 20, 0, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_entry_new(), 1, 2, 19, 20, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(adat_tabla, gtk_label_new("Isten"), 0, 1, 20, 21, 0, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_entry_new(), 1, 2, 20, 21, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(adat_tabla, gtk_label_new("Örökölt cím(ek)"), 0, 1, 21, 22, 0, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_combo_box_entry_new(), 1, 2, 21, 22, GTK_EXPAND | GTK_FILL, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_button_new_from_stock(GTK_STOCK_ADD), 2, 3, 21, 22, 0, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_button_new_from_stock(GTK_STOCK_REMOVE), 3, 4, 21, 22, 0, 0, 2, 2);

	gtk_table_attach(adat_tabla, gtk_label_new("Szerzett cím(ek)"), 0, 1, 22, 23, 0, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_combo_box_entry_new(), 1, 2, 22, 23, GTK_EXPAND | GTK_FILL, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_button_new_from_stock(GTK_STOCK_ADD), 2, 3, 22, 23, 0, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_button_new_from_stock(GTK_STOCK_REMOVE), 3, 4, 22, 23, 0, 0, 2, 2);

	gtk_table_attach(adat_tabla, gtk_label_new("Hűbérúr"), 0, 1, 23, 24, 0, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_entry_new(), 1, 2, 23, 24, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(adat_tabla, gtk_label_new("Hűbéresek"), 0, 1, 24, 25, 0, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_combo_box_entry_new(), 1, 2, 24, 25, GTK_EXPAND | GTK_FILL, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_button_new_from_stock(GTK_STOCK_ADD), 2, 3, 24, 25, 0, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_button_new_from_stock(GTK_STOCK_REMOVE), 3, 4, 24, 25, 0, 0, 2, 2);

	gtk_table_attach(adat_tabla, gtk_label_new("Előjogok"), 0, 1, 25, 26, 0, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_combo_box_entry_new(), 1, 2, 25, 26, GTK_EXPAND | GTK_FILL, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_button_new_from_stock(GTK_STOCK_ADD), 2, 3, 25, 26, 0, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_button_new_from_stock(GTK_STOCK_REMOVE), 3, 4, 25, 26, 0, 0, 2, 2);

	gtk_table_attach(adat_tabla, gtk_label_new("Jövedelem"), 0, 1, 26, 27, 0, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_entry_new(), 1, 2, 26, 27, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(adat_tabla, gtk_label_new("Jelmondat"), 0, 1, 27, 28, 0, 0, 2, 2);
	gtk_table_attach(adat_tabla, gtk_entry_new(), 1, 2, 27, 28, GTK_EXPAND | GTK_FILL, 0, 2, 2);
}

void
megjelenes_lap(GtkTable *megj_tabla)
{
	gtk_table_attach(megj_tabla, gtk_label_new("Szemszín"), 0, 1, 0, 1, 0, 0, 2, 2);
	gtk_table_attach(megj_tabla, gtk_entry_new(), 1, 2, 0, 1, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(megj_tabla, gtk_label_new("Hajszín"), 0, 1, 1, 2, 0, 0, 2, 2);
	gtk_table_attach(megj_tabla, gtk_entry_new(), 1, 2, 1, 2, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(megj_tabla, gtk_label_new("Hajviselet"), 0, 1, 2, 3, 0, 0, 2, 2);
	gtk_table_attach(megj_tabla, gtk_entry_new(), 1, 2, 2, 3, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(megj_tabla, gtk_label_new("Testsúly"), 0, 1, 3, 4, 0, 0, 2, 2);
	gtk_table_attach(megj_tabla, gtk_entry_new(), 1, 2, 3, 4, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(megj_tabla, gtk_label_new("Magasság"), 0, 1, 4, 5, 0, 0, 2, 2);
	gtk_table_attach(megj_tabla, gtk_entry_new(), 1, 2, 4, 5, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(megj_tabla, gtk_label_new("Testalkat"), 0, 1, 5, 6, 0, 0, 2, 2);
	gtk_table_attach(megj_tabla, gtk_entry_new(), 1, 2, 5, 6, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(megj_tabla, gtk_label_new("Ékszerek"), 0, 1, 6, 7, 0, 0, 2, 2);
	/* TODO: Ezt úgy kéne megcsinálni, hogy a hozzáadásnál csak azt lehessen hozzáadni, ami a karakternél van mint értéktárgy */
	gtk_table_attach(megj_tabla, gtk_combo_box_new(), 1, 2, 6, 7, GTK_EXPAND | GTK_FILL, 0, 2, 2);
	gtk_table_attach(megj_tabla, gtk_button_new_from_stock(GTK_STOCK_ADD), 2, 3, 6, 7, 0, 0, 2, 2);
	gtk_table_attach(megj_tabla, gtk_button_new_from_stock(GTK_STOCK_REMOVE), 3, 4, 6, 7, 0, 0, 2, 2);

	gtk_table_attach(megj_tabla, gtk_label_new("Stílus"), 0, 1, 7, 8, 0, 0, 2, 2);
	gtk_table_attach(megj_tabla, gtk_entry_new(), 1, 2, 7, 8, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(megj_tabla, gtk_label_new("Smink stílus"), 0, 1, 8, 9, 0, 0, 2, 2);
	gtk_table_attach(megj_tabla, gtk_entry_new(), 1, 2, 8, 9, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(megj_tabla, gtk_label_new("Parfüm stílus"), 0, 1, 9, 10, 0, 0, 2, 2);
	gtk_table_attach(megj_tabla, gtk_entry_new(), 1, 2, 9, 10, GTK_EXPAND | GTK_FILL, 0, 2, 2);
}

void
erzelmek_lap(GtkTable *erzelem_tabla)
{
	gtk_table_attach(erzelem_tabla, gtk_label_new("Szeretet"), 0, 1, 0, 1, 0, 0, 2, 2);
	gtk_table_attach(erzelem_tabla, gtk_entry_new(), 1, 2, 0, 1, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(erzelem_tabla, gtk_label_new("Gyűlölet"), 0, 1, 1, 2, 0, 0, 2, 2);
	gtk_table_attach(erzelem_tabla, gtk_entry_new(), 1, 2, 1, 2, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(erzelem_tabla, gtk_label_new("Bátorság"), 0, 1, 2, 3, 0, 0, 2, 2);
	gtk_table_attach(erzelem_tabla, gtk_entry_new(), 1, 2, 2, 3, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(erzelem_tabla, gtk_label_new("Félelem"), 0, 1, 3, 4, 0, 0, 2, 2);
	gtk_table_attach(erzelem_tabla, gtk_entry_new(), 1, 2, 3, 4, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(erzelem_tabla, gtk_label_new("Vágy"), 0, 1, 4, 5, 0, 0, 2, 2);
	gtk_table_attach(erzelem_tabla, gtk_entry_new(), 1, 2, 4, 5, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(erzelem_tabla, gtk_label_new("Undor"), 0, 1, 5, 6, 0, 0, 2, 2);
	gtk_table_attach(erzelem_tabla, gtk_entry_new(), 1, 2, 5, 6, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(erzelem_tabla, gtk_label_new("Nyugalom"), 0, 1, 6, 7, 0, 0, 2, 2);
	gtk_table_attach(erzelem_tabla, gtk_entry_new(), 1, 2, 6, 7, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(erzelem_tabla, gtk_label_new("Ingerültség"), 0, 1, 7, 8, 0, 0, 2, 2);
	gtk_table_attach(erzelem_tabla, gtk_entry_new(), 1, 2, 7, 8, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(erzelem_tabla, gtk_label_new("Hűség"), 0, 1, 8, 9, 0, 0, 2, 2);
	gtk_table_attach(erzelem_tabla, gtk_entry_new(), 1, 2, 8, 9, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(erzelem_tabla, gtk_label_new("Hűtlenség"), 0, 1, 9, 10, 0, 0, 2, 2);
	gtk_table_attach(erzelem_tabla, gtk_entry_new(), 1, 2, 9, 10, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(erzelem_tabla, gtk_label_new("Tisztelet"), 0, 1, 10, 11, 0, 0, 2, 2);
	gtk_table_attach(erzelem_tabla, gtk_entry_new(), 1, 2, 10, 11, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(erzelem_tabla, gtk_label_new("Tiszteletlenség"), 0, 1, 11, 12, 0, 0, 2, 2);
	gtk_table_attach(erzelem_tabla, gtk_entry_new(), 1, 2, 11, 12, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(erzelem_tabla, gtk_label_new("Szerelem"), 0, 1, 12, 13, 0, 0, 2, 2);
	gtk_table_attach(erzelem_tabla, gtk_entry_new(), 1, 2, 12, 13, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(erzelem_tabla, gtk_label_new("Elvakultság"), 0, 1, 13, 14, 0, 0, 2, 2);
	gtk_table_attach(erzelem_tabla, gtk_entry_new(), 1, 2, 13, 14, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(erzelem_tabla, gtk_label_new("Semlegesség"), 0, 1, 14, 15, 0, 0, 2, 2);
	gtk_table_attach(erzelem_tabla, gtk_entry_new(), 1, 2, 14, 15, GTK_EXPAND | GTK_FILL, 0, 2, 2);
}

void
tapasztalat_lap(GtkTable *tp_tabla)
{
	GtkWidget *frame;
	GtkTable *tabla;

	gtk_table_attach(tp_tabla, gtk_label_new("Eddig szerzett tapasztalati pontok"), 0, 1, 0, 1, 0, 0, 2, 2);
	gtk_table_attach(tp_tabla, gtk_entry_new(), 1, 2, 0, 1, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(tp_tabla, gtk_label_new("Elkölthető tapasztalati pontok"), 0, 1, 1, 2, 0, 0, 2, 2);
	gtk_table_attach(tp_tabla, gtk_entry_new(), 1, 2, 1, 2, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	frame = gtk_frame_new("TP-átváltás");
	gtk_table_attach(tp_tabla, frame, 0, 2, 2, 3, 0, 0, 2, 2);
	tabla = GTK_TABLE(gtk_table_new(8, 2, FALSE));
	gtk_container_add(GTK_CONTAINER(frame), GTK_WIDGET(tabla));

	gtk_table_attach(tabla, gtk_label_new("KÉ"), 0, 1, 0, 1, 0, 0, 2, 2);
	gtk_table_attach(tabla, gtk_entry_new(), 1, 2, 0, 1, GTK_EXPAND | GTK_FILL, 0, 2, 2);
	
	gtk_table_attach(tabla, gtk_label_new("TÉ"), 0, 1, 1, 2, 0, 0, 2, 2);
	gtk_table_attach(tabla, gtk_entry_new(), 1, 2, 1, 2, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(tabla, gtk_label_new("VÉ"), 0, 1, 2, 3, 0, 0, 2, 2);
	gtk_table_attach(tabla, gtk_entry_new(), 1, 2, 2, 3, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(tabla, gtk_label_new("CÉ"), 0, 1, 3, 4, 0, 0, 2, 2);
	gtk_table_attach(tabla, gtk_entry_new(), 1, 2, 3, 4, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(tabla, gtk_label_new("Kp"), 0, 1, 4, 5, 0, 0, 2, 2);
	gtk_table_attach(tabla, gtk_entry_new(), 1, 2, 4, 5, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(tabla, gtk_label_new("Ψp"), 0, 1, 5, 6, 0, 0, 2, 2);
	gtk_table_attach(tabla, gtk_entry_new(), 1, 2, 5, 6, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(tabla, gtk_label_new("Mp"), 0, 1, 6, 7, 0, 0, 2, 2);
	gtk_table_attach(tabla, gtk_entry_new(), 1, 2, 6, 7, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(tabla, gtk_label_new("Fp"), 0, 1, 7, 8, 0, 0, 2, 2);
	gtk_table_attach(tabla, gtk_entry_new(), 1, 2, 7, 8, GTK_EXPAND | GTK_FILL, 0, 2, 2);
}

void
harcertekek_lap(GtkTable *hm_tabla)
{
	gtk_table_attach(hm_tabla, gtk_label_new("Alap"), 1, 2, 0, 1, 0, 0, 2, 2);
	gtk_table_attach(hm_tabla, gtk_label_new("Módosítók"), 2, 3, 0, 1, 0, 0, 2, 2);
	gtk_table_attach(hm_tabla, gtk_label_new("Vásárolt HM"), 3, 4, 0, 1, 0, 0, 2, 2);
	gtk_table_attach(hm_tabla, gtk_label_new("Összesen"), 4, 5, 0, 1, 0, 0, 2, 2);

	gtk_table_attach(hm_tabla, gtk_label_new("KÉ"), 0, 1, 1, 2, 0, 0, 2, 2);
	gtk_table_attach(hm_tabla, gtk_entry_new(), 1, 2, 1, 2, GTK_EXPAND | GTK_FILL, 0, 2, 2);
	gtk_table_attach(hm_tabla, gtk_entry_new(), 2, 3, 1, 2, GTK_EXPAND | GTK_FILL, 0, 2, 2);
	gtk_table_attach(hm_tabla, gtk_entry_new(), 3, 4, 1, 2, GTK_EXPAND | GTK_FILL, 0, 2, 2);
	gtk_table_attach(hm_tabla, gtk_entry_new(), 4, 5, 1, 2, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(hm_tabla, gtk_label_new("TÉ"), 0, 1, 2, 3, 0, 0, 2, 2);
	gtk_table_attach(hm_tabla, gtk_entry_new(), 1, 2, 2, 3, GTK_EXPAND | GTK_FILL, 0, 2, 2);
	gtk_table_attach(hm_tabla, gtk_entry_new(), 2, 3, 2, 3, GTK_EXPAND | GTK_FILL, 0, 2, 2);
	gtk_table_attach(hm_tabla, gtk_entry_new(), 3, 4, 2, 3, GTK_EXPAND | GTK_FILL, 0, 2, 2);
	gtk_table_attach(hm_tabla, gtk_entry_new(), 4, 5, 2, 3, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(hm_tabla, gtk_label_new("VÉ"), 0, 1, 3, 4, 0, 0, 2, 2);
	gtk_table_attach(hm_tabla, gtk_entry_new(), 1, 2, 3, 4, GTK_EXPAND | GTK_FILL, 0, 2, 2);
	gtk_table_attach(hm_tabla, gtk_entry_new(), 2, 3, 3, 4, GTK_EXPAND | GTK_FILL, 0, 2, 2);
	gtk_table_attach(hm_tabla, gtk_entry_new(), 3, 4, 3, 4, GTK_EXPAND | GTK_FILL, 0, 2, 2);
	gtk_table_attach(hm_tabla, gtk_entry_new(), 4, 5, 3, 4, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(hm_tabla, gtk_label_new("CÉ"), 0, 1, 4, 5, 0, 0, 2, 2);
	gtk_table_attach(hm_tabla, gtk_entry_new(), 1, 2, 4, 5, GTK_EXPAND | GTK_FILL, 0, 2, 2);
	gtk_table_attach(hm_tabla, gtk_entry_new(), 2, 3, 4, 5, GTK_EXPAND | GTK_FILL, 0, 2, 2);
	gtk_table_attach(hm_tabla, gtk_entry_new(), 3, 4, 4, 5, GTK_EXPAND | GTK_FILL, 0, 2, 2);
	gtk_table_attach(hm_tabla, gtk_entry_new(), 4, 5, 4, 5, GTK_EXPAND | GTK_FILL, 0, 2, 2);
}

void
eletero_lap(GtkTable *eletero_tabla)
{
	gtk_table_attach(eletero_tabla, gtk_label_new("Alap"), 1, 2, 0, 1, 0, 0, 2, 2);
	gtk_table_attach(eletero_tabla, gtk_label_new("Módosítók"), 2, 3, 0, 1, 0, 0, 2, 2);
	gtk_table_attach(eletero_tabla, gtk_label_new("Vásárolt"), 3, 4, 0, 1, 0, 0, 2, 2);
	gtk_table_attach(eletero_tabla, gtk_label_new("Összesen"), 4, 5, 0, 1, 0, 0, 2, 2);

	gtk_table_attach(eletero_tabla, gtk_label_new("Ép"), 0, 1, 1, 2, 0, 0, 2, 2);
	gtk_table_attach(eletero_tabla, gtk_entry_new(), 1, 2, 1, 2, GTK_EXPAND | GTK_FILL, 0, 2, 2);
	gtk_table_attach(eletero_tabla, gtk_entry_new(), 2, 3, 1, 2, GTK_EXPAND | GTK_FILL, 0, 2, 2);
	gtk_table_attach(eletero_tabla, gtk_entry_new(), 4, 5, 1, 2, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(eletero_tabla, gtk_label_new("Fp"), 0, 1, 2, 3, 0, 0, 2, 2);
	gtk_table_attach(eletero_tabla, gtk_entry_new(), 1, 2, 2, 3, GTK_EXPAND | GTK_FILL, 0, 2, 2);
	gtk_table_attach(eletero_tabla, gtk_entry_new(), 2, 3, 2, 3, GTK_EXPAND | GTK_FILL, 0, 2, 2);
	gtk_table_attach(eletero_tabla, gtk_entry_new(), 3, 4, 2, 3, GTK_EXPAND | GTK_FILL, 0, 2, 2);
	gtk_table_attach(eletero_tabla, gtk_entry_new(), 4, 5, 2, 3, GTK_EXPAND | GTK_FILL, 0, 2, 2);
}

void
pszi_lap(GtkTable *pszi_tabla)
{
	GtkWidget *frame;
	GtkTable *tabla;

	gtk_table_attach(pszi_tabla, gtk_label_new("Iskola típusa"), 0, 1, 0, 1, 0, 0, 2, 2);
	gtk_table_attach(pszi_tabla, gtk_entry_new(), 1, 2, 0, 1, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(pszi_tabla, gtk_label_new("Képzettség foka"), 0, 1, 1, 2, 0, 0, 2, 2);
	gtk_table_attach(pszi_tabla, gtk_entry_new(), 1, 2, 1, 2, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(pszi_tabla, gtk_label_new("Alap Ψ-pontok"), 0, 1, 2, 3, 0, 0, 2, 2);
	gtk_table_attach(pszi_tabla, gtk_entry_new(), 1, 2, 2, 3, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(pszi_tabla, gtk_label_new("Vásárolt Ψ-pontok"), 0, 1, 3, 4, 0, 0, 2, 2);
	gtk_table_attach(pszi_tabla, gtk_entry_new(), 1, 2, 3, 4, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	gtk_table_attach(pszi_tabla, gtk_label_new("Ψ-pontok összesen"), 0, 1, 4, 5, 0, 0, 2, 2);
	gtk_table_attach(pszi_tabla, gtk_entry_new(), 1, 2, 4, 5, GTK_EXPAND | GTK_FILL, 0, 2, 2);

	frame = gtk_frame_new("Mágiaellenállás");
	tabla = GTK_TABLE(gtk_table_new(1, 3, FALSE));
	gtk_container_add(GTK_CONTAINER(frame), GTK_WIDGET(tabla));
	gtk_table_attach(pszi_tabla, frame, 0, 2, 5, 6, 0, 0, 2, 2);

	gtk_table_attach(tabla, gtk_label_new("Asztrál"), 1, 2, 0, 1, 0, 0, 2, 2);
	gtk_table_attach(tabla, gtk_label_new("Mentál"), 2, 3, 0, 1, 0, 0, 2, 2);

	gtk_table_attach(tabla, gtk_label_new("Tudatalatti"), 0, 1, 1, 2, 0, 0, 2, 2);
	gtk_table_attach(tabla, gtk_entry_new(), 1, 2, 1, 2, 0, 0, 2, 2);
	gtk_table_attach(tabla, gtk_entry_new(), 2, 3, 1, 2, 0, 0, 2, 2);

	gtk_table_attach(tabla, gtk_label_new("Tudatalattit befolyásoló módosítók"), 0, 1, 2, 3, 0, 0, 2, 2);
	gtk_table_attach(tabla, gtk_entry_new(), 1, 2, 2, 3, 0, 0, 2, 2);
	gtk_table_attach(tabla, gtk_entry_new(), 2, 3, 2, 3, 0, 0, 2, 2);

	gtk_table_attach(tabla, gtk_label_new("Statikus pajzs"), 0, 1, 3, 4, 0, 0, 2, 2);
	gtk_table_attach(tabla, gtk_entry_new(), 1, 2, 3, 4, 0, 0, 2, 2);
	gtk_table_attach(tabla, gtk_entry_new(), 2, 3, 3, 4, 0, 0, 2, 2);

	gtk_table_attach(tabla, gtk_label_new("Dinamikus pajzs"), 0, 1, 4, 5, 0, 0, 2, 2);
	gtk_table_attach(tabla, gtk_entry_new(), 1, 2, 4, 5, 0, 0, 2, 2);
	gtk_table_attach(tabla, gtk_entry_new(), 2, 3, 4, 5, 0, 0, 2, 2);

	gtk_table_attach(tabla, gtk_label_new("Egyéb"), 0, 1, 5, 6, 0, 0, 2, 2);
	gtk_table_attach(tabla, gtk_entry_new(), 1, 2, 5, 6, 0, 0, 2, 2);
	gtk_table_attach(tabla, gtk_entry_new(), 2, 3, 5, 6, 0, 0, 2, 2);

	gtk_table_attach(tabla, gtk_hseparator_new(), 0, 3, 6, 7, GTK_EXPAND | GTK_FILL, 0, 4, 4);

	gtk_table_attach(tabla, gtk_label_new("ME összesen"), 0, 1, 7, 8, 0, 0, 2, 2);
	gtk_table_attach(tabla, gtk_entry_new(), 1, 2, 7, 8, 0, 0, 2, 2);
	gtk_table_attach(tabla, gtk_entry_new(), 2, 3, 7, 8, 0, 0, 2, 2);

	gtk_table_attach(tabla, gtk_label_new("Dinamikus nélkül"), 0, 1, 8, 9, 0, 0, 2, 2);
	gtk_table_attach(tabla, gtk_entry_new(), 1, 2, 8, 9, 0, 0, 2, 2);
	gtk_table_attach(tabla, gtk_entry_new(), 2, 3, 8, 9, 0, 0, 2, 2);
}

