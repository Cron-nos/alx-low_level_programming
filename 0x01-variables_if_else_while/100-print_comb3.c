#include <stdlib.h>

#include <stdio.h>

/**
 * main - prints all possible combinations of two-digit numbers with
 * different digits. Treating combinations like 01 and 10 as the same.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = num1; num2 <= 9; num2++)
		{
			if (num1 != num2)
			{
				putchar(num1 + '0');
				putchar(num2 + '0');

				if (!(num1 == 9 && num2 == 8))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
