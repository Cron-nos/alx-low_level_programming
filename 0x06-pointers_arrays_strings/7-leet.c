#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @n: value
 *
 * Return: value of n
 */

char *leet(char *n)
{
	int y, z;
	char p[] = "aAeEoOtTlL";
	char q[] = "4433007711";

	for (y = 0; n[y] != '\0'; y++)
	{
		for (z = 0; z < 10; z++)
		{
			if (n[y] == p[z])
			{
				n[y] = q[z];
			}
		}
	}
	return (n);
}
