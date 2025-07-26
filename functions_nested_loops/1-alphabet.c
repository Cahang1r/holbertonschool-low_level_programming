#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet followed by newline
 */
void print_alphabet(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
        _putchar(letter);
    _putchar('\n');
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    print_alphabet();
    return (0);
}
