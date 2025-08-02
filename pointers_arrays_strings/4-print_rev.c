#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int a = 0;
    int i;

	while (s[a] != '\0')
	{
		_putchar(s[a]);
		a++;
	}
    for (i = a - 1; a >= 0; a--)
        _putchar(s[i]);
    
	_putchar('\n');
}
