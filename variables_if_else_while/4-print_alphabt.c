#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Description: Uses only the putchar function
 * to print all lowercase letters followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++){
        if(letter != 'q' && letter != 'e')
        putchar(letter);
    }
		
	putchar('\n');

	return (0);
}
