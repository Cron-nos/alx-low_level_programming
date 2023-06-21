#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int li;
	unsigned long num1 = 0, num2 = 1, sum;

	for (li = 0; li < 50; li++)
	{
		sum = num1 + num2;
		printf("%lu", sum);

		num1 = num2;
		num2 = sum;

		if (li == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
