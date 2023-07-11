#include <stdio.h>

#include <stdlib.h>

#include "main.h"

/**
 * _strdup - returns a pointer to a new string which is a duplicate
 * of the string str.
 * @str: char
 *
 * Return: NULL if str = NULL, pointer to the duplicated string,
 * NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *s;
	int a, b = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}

	s = malloc(sizeof(char) * (a + 1));
	if (s == NULL)
	{
		return (NULL);
	}

	for (b = 0; str[b]; b++)
	{
		s[b] = str[b];
	}
	s[b] = '\0';

	return (s);
}
