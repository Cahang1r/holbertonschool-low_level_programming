#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
    int length = 0;
    int i;

	while (str[length] != '\0')
	{
		length++;
	}
    n = (length + 1) / 2;

    for (i = n; i < length; i++)
    {
        _putchar(str[i]);
    }
}