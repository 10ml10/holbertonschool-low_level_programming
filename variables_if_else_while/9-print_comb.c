#include <stdio.h>

/**
 * main - Affiche toutes les combinaisons possibles de deux chiffres
 *        dans l’ordre croissant, séparées par ", ", sans répétition.
 *
 * Return: Toujours 0
 */
int main(void)
{
	int i = 0;
	int j;

	while (i <= 8)
	{
		j = i + 1;
		while (j <= 9)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}

			j++;
		}
		i++;
	}

	putchar('\n');

	return (0);
}
