#include <stdlib.h>

#include "main.h"

/**
 * *array_range - creates an array of integers.
 * @min: minimum value range
 * @max: maximum value range
 *
 * Return: pointer to the new array, NULL if malloc fails
 */

int *array_range(int min, int max)
{
	int *mlc;
	int a, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	mlc = malloc(sizeof(int) * size);

	if (mlc == NULL)
	{
		return (NULL);
	}

	for (a = 0; min <= max; a++)
	{
		mlc[a] = min++;
	}

	return (mlc);
}
