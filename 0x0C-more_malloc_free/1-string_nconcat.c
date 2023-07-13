#include <stdlib.h>

#include "main.h"

/**
 * *string_nconcat - concatenates two strings.
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a = 0, b = 0, str_len1 = 0, str_len2 = 0;

	while (s1 && s1[str_len1])
		str_len1++;
	while (s2 && s2[str_len2])
		str_len2++;

	if (n < str_len2)
		s = malloc(sizeof(char) * (str_len1 + n + 1));
	else
		s = malloc(sizeof(char) * (str_len1 + str_len2 + 1));

	if (!s)
		return (NULL);

	while (a < str_len1)
	{
		s[a] = s1[a];
		a++;
	}

	while (n < str_len2 && a < (str_len1 + n))
		s[a++] = s2[b++];

	while (n >= str_len2 && a < (str_len1 + str_len2))
		s[a++] = s2[b++];

	s[a] = '\0';

	return (s);
}

