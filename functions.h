#ifndef _MAGUS_KARGEN_FUNCTIONS_H
# define _MAGUS_KARGEN_FUNCTIONS_H

# include <gtk/gtk.h>

/* convert.c */
gint convert_string(char *from_string, char **to_string);

/* lapok.c */
void azonnal_lathato_dolgok_lap(GtkTable *azonnal_tabla);
void kepessegek_lap(GtkTable *kepessegek_tabla);
void jatekos_es_karakter_lap(GtkTable *jatekos_tabla);
void fobb_adatok_lap(GtkTable *adat_tabla);
void megjelenes_lap(GtkTable *megj_tabla);
void erzelmek_lap(GtkTable *erzelem_tabla);
void tapasztalat_lap(GtkTable *tp_tabla);
void harcertekek_lap(GtkTable *hm_tabla);
void eletero_lap(GtkTable *eletero_tabla);
void pszi_lap(GtkTable *pszi_lap);

/* karakter.c */
void karakter_betoltes(gchar *filenev);

#endif /* _MAGUS_KARGEN_FUNCTIONS_H */

