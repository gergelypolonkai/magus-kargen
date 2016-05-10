#include <gtk/gtk.h>
#include "config.h"

extern gint aktiv_kap;
extern GtkWidget *ero_spin,
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

void set_kap_ertek();

void
update_kap()
{
	gint kepesseg,
		 levonando;

	levonando = 0;

	kepesseg = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(ero_spin));
	while (kepesseg > 18)
	{
		kepesseg--;
		levonando += 3;
	}
	while (kepesseg > 15)
	{
		kepesseg--;
		levonando += 2;
	}
	while (kepesseg > 0)
	{
		kepesseg--;
		levonando++;
	}

	kepesseg = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(gyorsasag_spin));
	while (kepesseg > 18)
	{
		kepesseg--;
		levonando += 3;
	}
	while (kepesseg > 15)
	{
		kepesseg--;
		levonando += 2;
	}
	while (kepesseg > 0)
	{
		kepesseg--;
		levonando++;
	}

	kepesseg = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(ugyesseg_spin));
	while (kepesseg > 18)
	{
		kepesseg--;
		levonando += 3;
	}
	while (kepesseg > 15)
	{
		kepesseg--;
		levonando += 2;
	}
	while (kepesseg > 0)
	{
		kepesseg--;
		levonando++;
	}

	kepesseg = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(allokepesseg_spin));
	while (kepesseg > 18)
	{
		kepesseg--;
		levonando += 3;
	}
	while (kepesseg > 15)
	{
		kepesseg--;
		levonando += 2;
	}
	while (kepesseg > 0)
	{
		kepesseg--;
		levonando++;
	}

	kepesseg = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(egeszseg_spin));
	while (kepesseg > 18)
	{
		kepesseg--;
		levonando += 3;
	}
	while (kepesseg > 15)
	{
		kepesseg--;
		levonando += 2;
	}
	while (kepesseg > 0)
	{
		kepesseg--;
		levonando++;
	}

	kepesseg = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(szepseg_spin));
	while (kepesseg > 18)
	{
		kepesseg--;
		levonando += 3;
	}
	while (kepesseg > 15)
	{
		kepesseg--;
		levonando += 2;
	}
	while (kepesseg > 0)
	{
		kepesseg--;
		levonando++;
	}

	kepesseg = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(intelligencia_spin));
	while (kepesseg > 18)
	{
		kepesseg--;
		levonando += 3;
	}
	while (kepesseg > 15)
	{
		kepesseg--;
		levonando += 2;
	}
	while (kepesseg > 0)
	{
		kepesseg--;
		levonando++;
	}

	kepesseg = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(akaratero_spin));
	while (kepesseg > 18)
	{
		kepesseg--;
		levonando += 3;
	}
	while (kepesseg > 15)
	{
		kepesseg--;
		levonando += 2;
	}
	while (kepesseg > 0)
	{
		kepesseg--;
		levonando++;
	}

	kepesseg = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(asztral_spin));
	while (kepesseg > 18)
	{
		kepesseg--;
		levonando += 3;
	}
	while (kepesseg > 15)
	{
		kepesseg--;
		levonando += 2;
	}
	while (kepesseg > 0)
	{
		kepesseg--;
		levonando++;
	}

	kepesseg = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(erzekeles_spin));
	while (kepesseg > 18)
	{
		kepesseg--;
		levonando += 3;
	}
	while (kepesseg > 15)
	{
		kepesseg--;
		levonando += 2;
	}
	while (kepesseg > 0)
	{
		kepesseg--;
		levonando++;
	}

	kepesseg = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(ke_spin));
	levonando += kepesseg;
	kepesseg = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(te_spin));
	levonando += kepesseg;
	kepesseg = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(ve_spin));
	levonando += kepesseg;
	kepesseg = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(ce_spin));
	levonando += 2 * kepesseg;
	kepesseg = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(epalap_spin));
	levonando += 2 * kepesseg;
	kepesseg = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(fpalap_spin));
	levonando += kepesseg;
	kepesseg = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(mpalap_spin));
	levonando += 2 * kepesseg;
	kepesseg = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(ppalap_spin));
	levonando += 2 * kepesseg;

	aktiv_kap = KEZDO_KAP - levonando;
	set_kap_ertek();
}

