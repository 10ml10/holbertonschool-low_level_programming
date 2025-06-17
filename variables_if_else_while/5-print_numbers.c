#include <stdio.h>

/**
 * main - Affiche tous les chiffres de 0 à 9, suivis d'un saut de ligne
 *
 * Return: Toujours 0
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
