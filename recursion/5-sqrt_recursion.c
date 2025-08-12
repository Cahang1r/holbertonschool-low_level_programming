#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to calculate the square root of
 *
 * Return: the natural square root if it exists, otherwise -1
 */
int _sqrt_recursion(int n)
{
	int i;

	if (n < 0)
		return (-1);

	for (i = 0; i * i <= n; i++)
	{
		if (i * i == n)
			return (i);
	}
	return (-1);
}
