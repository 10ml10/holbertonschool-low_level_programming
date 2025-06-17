#include <stdio.h>

/**
 * main - affiche l'alphabet minuscules sans q et e,
 *        suivi d'un retour à la ligne
 *
 * Return: toujours 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
			putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
