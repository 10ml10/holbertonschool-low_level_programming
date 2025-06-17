#include <stdio.h>

/**
 * main - Affiche tous les chiffres de 0 à 9 séparés par une virgule
 *        et un espace, suivi d'un retour à la ligne.
 *
 * Return: Toujours 0
 */
int main(void)
{
	int chiffre;

	for (chiffre = 0; chiffre <= 9; chiffre++)
	{
		putchar(chiffre + '0');

		if (chiffre != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
