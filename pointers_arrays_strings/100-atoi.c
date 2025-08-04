#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * This function converts the initial portion of the string pointed to by s
 * to int representation. It handles multiple '-' and '+' signs before the number.
 * If no digits are found, it returns 0.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0, found_digit = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found_digit = 1;
			result = result * 10 + (s[i] - '0');
		}
		else if (found_digit)
			break;
		i++;
	}

	return (sign * result);
}
