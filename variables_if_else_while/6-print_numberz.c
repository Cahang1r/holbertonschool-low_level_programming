#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9
 *
 * Description: Uses a for loop to print numbers consecutively without spaces,
 *              followed by a newline.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
