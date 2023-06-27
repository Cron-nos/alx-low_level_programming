#include "main.h"


/**
 * rev_string - reverses a string
 * @s: Input string
 *
 * Return: reversed string
 */


void rev_string(char *s)
{
	char rev = s[0];
	int take = 0;
	int i;

	while (s[take] != '\0')
		take++;
	for (i = 0; i < take; i++)
	{
		take--;
		rev = s[i];
		s[i] = s[take];
		s[take] = rev;
	}
}
