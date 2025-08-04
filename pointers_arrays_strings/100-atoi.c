#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Handles multiple '+' and '-' signs before digits,
 * stops parsing at the first non-digit after digits,
 * returns 0 if no digits found,
 * and prevents signed integer overflow.
 *
 * Return: Converted integer.
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0, found_digit = 0, digit;

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

			/* Overflow check */
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
