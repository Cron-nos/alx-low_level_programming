#include "main.h"

/**
 * prints a triangle, followed by a new line.
 * @size: number of '#' to print
 *
 * Return: void
 */

void print_triangle(int size)
{
	while (size > 0)
	{
		_putchar('#');
		size--;
	}

	_putchar('\n');
}
