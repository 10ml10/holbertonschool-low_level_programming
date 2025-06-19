#include "main.h"

/**
 * print_alphabet_x10 - imprime l'alphabet et le répète 10x,
 * suivi par un saut de ligne 
 *
 * Return:0
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
