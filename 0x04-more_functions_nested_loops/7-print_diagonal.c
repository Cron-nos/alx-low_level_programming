#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times '\' should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a = 0;
		int b;

		while (a < n)
		{
			b = 0;

			while (b < n)
			{
				if (b == a)
					_putchar('\\');
				else if (b < a)
					_putchar(' ');

				b++;
			}

			_putchar('\n');
			a++;
		}
	}
}

