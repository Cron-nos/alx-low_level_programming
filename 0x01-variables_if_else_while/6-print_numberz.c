#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 *        followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int dig;

	for (dig = 0; dig <= 9; dig++)
	{
		putchar(dig + '0');
	}
	putchar('\n');

	return (0);
}
