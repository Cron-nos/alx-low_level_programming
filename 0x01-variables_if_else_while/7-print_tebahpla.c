#include <stdlib.h>

#include <time.h>

#include <stdio.h>


/**
 * main - Prints the lowercase alphabet in reverse, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph;

	for (alph = 'z'; alph  >= 'a'; alph--)
	{
		putchar(alph);
	}

	putchar('\n');

	return (0);
}
