#include <stdlib.h>

#include <time.h>

#include <stdio.h>


/**
 * main - prints the alphabet in lowercase excluding q and e,
 *        followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower != 'q' && lower != 'e')
		{
			putchar(lower);
		}
	}

	putchar('\n');
	return (0);
}
