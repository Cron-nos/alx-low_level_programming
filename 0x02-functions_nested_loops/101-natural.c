#include <stdio.h>

/**
 * main - prints the sum of multiples of 3 and 5 excluding 1024
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n,
	    int prod = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			sum += n;
	}

	printf("%d\n", prod);

	return (0);
}
