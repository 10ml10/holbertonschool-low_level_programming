#include "main.h"

/**
 * print_alphabet_x10 - imprime l'alphabet en minuscules 10 fois,
 * chaque ligne suivie d'un saut de ligne
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int line;
	char letter;

	for (line = 0; line < 10; line++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
