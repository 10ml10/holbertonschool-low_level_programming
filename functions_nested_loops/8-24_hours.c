#include "main.h"

/**
 * jack_bauer - Affiche chaque minute de la journée
 *
 * Description : Affiche l'heure de 00:00 à 23:59,
 * en utilisant uniquement _putchar pour afficher les caractères.
 * Chaque minute est affichée sur une ligne.
 */
void jack_bauer(void)
{
	int heure, minute;

	for (heure = 0; heure < 24; heure++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((heure / 10) + '0');
			_putchar((heure % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
