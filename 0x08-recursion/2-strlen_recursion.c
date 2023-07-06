#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: length of the string.
 */

int _strlen_recursion(char *s)
{
	int st_length = 0;

	if (*s)
	{
		st_length++;
		st_length += _strlen_recursion(s + 1);
	}
	return (st_length);
}
