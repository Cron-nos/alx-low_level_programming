#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array
 * @size: the number of elements in the array array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: return -1 (if no element matches or if size <= 0), otherwise 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
