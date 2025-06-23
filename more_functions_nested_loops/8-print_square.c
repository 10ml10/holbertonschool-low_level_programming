#include "main.h"

/**
 * print_square - Prints a square using the '#' character.
 * @size: The size of the square.
 *
 * Description: Prints a square of '#' characters of the given size,
 * followed by a newline. If size is 0 or less, only a newline is printed.
 */
void print_square(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row < size; row++)
		{
			for (col = 0; col < size; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
