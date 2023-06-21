#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	unsigned long int m, l, num, sum;

	m = 1;
	l = 2;
	sum = 0;

	for (n = 1; n <= 33; ++n)
	{
		if (m < 4000000 && (m % 2) == 0)
		{
			sum = sum + m;
		}
		num = m + l;
		m = l;
		l = num;
	}

	printf("%lu\n", sum);

	return (0);
}
