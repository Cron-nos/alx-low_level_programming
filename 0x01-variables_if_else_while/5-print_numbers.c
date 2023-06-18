#include <stdlib.h>

#include <time.h>

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

	for (dig = '0'; dig <= '9'; dig++)
	{
		printf("%d\n", dig);
	}
	return (0);
}
