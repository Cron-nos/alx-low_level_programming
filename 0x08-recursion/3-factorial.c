#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * Returns -1 to indicate an error if (n < 0)
 * Factorial of 0 is 1
 *@n: number to be returned from
 *
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
