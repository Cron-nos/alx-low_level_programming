#include "main.h"

#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: input one to concat.
 * @s2: input two to concat.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len_s1 = 0, len_s2 = 0;
	int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1] != '\0')
		len_s1++;

	while (s2[len_s2] != '\0')
		len_s2++;

	concat = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		concat[i] = s1[i];

	for (j = 0; j < len_s2; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';

	return (concat);
}
