#include <stdio.h>

/**
 * print_to_98 - Affiche tous les entiers naturels de n à 98
 * @n: Le point de départ (entier donné en argument)
 *
 * Description : Affiche tous les entiers de n jusqu'à 98
 * en les séparant par des virgules et un espace,
 * et finit par une nouvelle ligne.
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	printf("\n");
}
