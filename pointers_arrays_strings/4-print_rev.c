#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to print in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	/* Calculate length of the string */
	while (s[len] != '\0')
		len++;

	/* Print characters in reverse */
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
