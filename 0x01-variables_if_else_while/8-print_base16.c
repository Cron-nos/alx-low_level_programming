#include <stdlib.h>

#include <time.h>

#include <stdio.h>


/**
 * main - prints all the numbers of base 16 in lowercase on a single line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int base16;

	char alph16;


	for (base16 = 0; base16 <= 9; base16++)
	{
		putchar(base16 + '0');
	}


	for (alph16 = 'a'; alph16 <= 'f'; alph16++)
	{
		putchar(alph16);
	}


	putchar('\n');

	return (0);
}

