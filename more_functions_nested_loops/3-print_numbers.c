#include "main.h"

void print_numbers(void)
{
    char c;

    for (c = 0; c <= 9; c++)
        _putchar(c + '0');  // convert number to ASCII digit

    _putchar('\n');  // missing semicolon added
}
