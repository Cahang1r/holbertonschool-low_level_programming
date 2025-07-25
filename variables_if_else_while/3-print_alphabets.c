#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and then uppercase
 *
 * Description: Uses only the putchar function
 * to print all lowercase letters followed by
 * all uppercase letters, then a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	/* print lowercase letters */
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	/* print uppercase letters */
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
