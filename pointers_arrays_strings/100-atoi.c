#include <stdio.h>
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer. If no digits are found, returns 0.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int found_digit = 0;
	int digit;

	while (*s)
	{
		if (*s == '-' || *s == '+')
		{
			if (found_digit)
				break;
			if (*s == '-')
				sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			digit = *s - '0';

			if (result < (INT_MIN + digit) / 10)
				return (sign == 1 ? INT_MAX : INT_MIN);

			result = result * 10 - digit;
			found_digit = 1;
		}
		else if (found_digit)
		{
			break;
		}
		s++;
	}

	if (sign == 1)
	{
		if (result == INT_MIN)
			return (INT_MIN); /* avoid overflow by not negating */
		return (-result);
	}
	return (result);
}

