#include <stdio.h>

/**
 * main - Prints the alphabet in uppercase then lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}

