#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase followed by newline
 */
void print_alphabet(void)
{
    for (i=0;i<10;i++)
    {
        char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');

    }
}
