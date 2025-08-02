#include "main.h"

/**
 * puts2 - prints every other character of a string,
 *         starting with the first character
 * @str: The input string
 *
 * Return: void
 */
void puts2(char *str)
{
    int a = 0;

    while (str[a] != 0)
    {
        _putchar(str[a]);
        a += 2;
    }
    _putchar('\n');
}