#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Handles multiple '+' and '-' signs before digits,
 * stops parsing at the first non-digit after digits,
 * returns 0 if no digits found,
 * and prevents signed integer overflow and negation UB.
 *
 * Return: Converted integer.
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
			digit = s[i] - '0';
			found_digit = 1;

			/* Check overflow for positive */
			if (sign == 1)
			{
				if (result > (INT_MAX - digit) / 10)
					return (INT_MAX);
			}
			/* Check overflow for negative */
			else
			{
				/* For INT_MIN, max positive value allowed is INT_MAX + 1 */
				if (result > ((unsigned int)INT_MAX + 1U - digit) / 10)
					return (INT_MIN);
			}

			result = result * 10 + digit;
		}
		else if (found_digit)
			break;

		i++;
	}

	if (sign == -1)
	{
		/* Handle INT_MIN without negation */
		if (result == (unsigned int)INT_MAX + 1U)
			return (INT_MIN);
		return (-result);
	}
	return (result);
}
