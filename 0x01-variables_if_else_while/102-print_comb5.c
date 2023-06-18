#include <stdlib.h>

#include <stdio.h>

/**
 * main - Prints all possible different combinations of two numbers from
 *	0 to 99.
 *	The combinations are separated by a comma and a space.
 *	Numbers are printed with two digits, padded with leading zeros if necessary.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 < 100; num1++)
	{
		for (num2 = num1 + 1; num2 < 100; num2++)
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');

			if (!(num1 == 98 && num2 == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
