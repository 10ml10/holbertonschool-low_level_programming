#include <stdio.h>

/**
 * _isdigit - verifie si c est O ou 9
 * @c: le caractère à vérifier
 *
 * Return: 1 si c est un chiffre, 0 si non
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
