#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 *
 * Return: void
 */
void _puts(char *str)
{
    int a = 0;

    while (str[a] != 0)
    {
        _putchar(str[a]);
        a++;
    }
    _putchar('\n');
}
