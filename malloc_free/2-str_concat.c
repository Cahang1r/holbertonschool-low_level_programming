#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings into a newly allocated space.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Pointer to the newly allocated concatenated string,
 *         or NULL on failure.
 *         Treats NULL as empty string.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i, j, len1, len2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1]; len1++)
		;

	for (len2 = 0; s2[len2]; len2++)
		;

	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		concat[i + j] = s2[j];
	}

	concat[len1 + len2] = '\0';

	return (concat);
}
