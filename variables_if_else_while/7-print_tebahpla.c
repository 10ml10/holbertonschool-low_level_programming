#include <stdio.h>

/**
 * main - Affiche l'alphabet en minuscules inversées, suivi d'un saut de ligne
 *
 * Return: Toujours 0
 */
int main(void)
{
	int i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}

	putchar('\n');
	return (0);
}
