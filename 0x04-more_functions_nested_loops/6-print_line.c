#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times '_' should be printed
 *
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a = 0;

		while (a < n)
		{
			_putchar('_');
			a++;
		}
		_putchar('\n');
	}
}
