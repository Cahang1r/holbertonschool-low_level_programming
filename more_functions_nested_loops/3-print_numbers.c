#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned.
 */

void print_numbers(void)
{
    char c;

    for (c = 0; c <= 9; c++)
        _putchar(c + '0');  /* convert number to ASCII digit */

    _putchar('\n');
}
