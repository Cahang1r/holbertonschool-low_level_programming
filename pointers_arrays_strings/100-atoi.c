#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * This function converts the initial part of the string pointed to by s
 * to an integer. It handles multiple '+' and '-' signs. It stops at the
 * first non-digit character after the digits. It also safely handles
 * INT_MIN without overflow.
 *
 * Return: The converted integer, or 0 if no digits found.
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0, found_digit = 0;
	int digit;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
			;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found_digit = 1;
			digit = s[i] - '0';

			/* Check for overflow before multiplying and adding */
			if (sign == 1)
			{
				if (result > (INT_MAX - digit) / 10)
					return (INT_MAX);
			}
			else
			{
				if (result > (-(INT_MIN + digit)) / 10)
					return (INT_MIN);
			}

			result = result * 10 + digit;
		}
		else if (found_digit)
			break;

		i++;
	}

	if (sign == -1)
		return (-result);
	return (result);
}
