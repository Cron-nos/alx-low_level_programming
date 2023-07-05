#include "main.h"

#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers.
 * @a: input value
 * @size: input value
 *
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int s1;
	int s2;
	int p;

	s1 = 0;
	s2 = 0;
	for (p = 0; p < size; p++)
	{
		s1 = s1 + a[p * size + p];
	}
	for (p = size - 1; p >= 0; p--)
	{
		s2 += a[p * size + (size - p - 1)];
	}
	printf("%d, %d\n", s1, s2);
}
