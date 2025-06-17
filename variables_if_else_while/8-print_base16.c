#include <stdio.h>

/**
 * main - Affiche les chiffres de base 16 en minuscules
 * suivis d'un retour à la ligne
 *
 * Return: Toujours 0
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}

	i = 'a';

	while (i <= 'f')
	{
		putchar(i);
		i++;
	}

	putchar('\n');
	return (0);
}
