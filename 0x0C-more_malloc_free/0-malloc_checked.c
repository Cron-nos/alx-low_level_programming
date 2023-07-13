#include <stdlib.h>

#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes that is allocated
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *mlc;

	mlc = malloc(b);

	if (mlc == NULL)
		exit(98);

	return (mlc);
}
