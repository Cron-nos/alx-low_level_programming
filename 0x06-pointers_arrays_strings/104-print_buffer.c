#include "main.h"

#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 *
 * Return: Always 0 (Success)
 */

void print_buffer(char *b, int size)
{
	int p, q, r;

	p = 0;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (p < size)
	{
		r = size - p < 10 ? size - p : 10;
		printf("%08x: ", p);
		for (q = 0; q < 10; q++)
		{
			if (q < r)
				printf("%02x", *(b + p + q));
			else
				printf("  ");
			if (q % 2)
			{
				printf(" ");
			}
		}
		for (q = 0; q < r; q++)
		{
			int c = *(b + p + q);


			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		p += 10;
	}
}
