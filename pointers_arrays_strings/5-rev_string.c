#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int start = 0;
	int end = 0;
	char temp;

	/* Find length of string */
	while (s[end] != '\0')
		end++;
	end--; /* Move to last character index */

	/* Swap characters from start to end */
	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
