#include <stdio.h>

/**
 * main -  prints the first 98 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 * Purpose - no hardcode
 *
 * Return:  Always 0 (Success)
 */

int main(void)
{
	unsigned long int a;
	unsigned long int prev = 1;
	unsigned long int next = 2;
	unsigned long int l = 1000000000;
	unsigned long int prev1;
	unsigned long int prev2;
	unsigned long int next1;
	unsigned long int next2;

	printf("%lu", prev);

	for (a = 1; a < 91; a++)
	{
		printf(", %lu", next);
		next += prev;
		prev = next - prev;
	}

	prev1 = (prev / l);
	prev2 = (prev % l);
	next1 = (next / l);
	next2 = (next % l);

	for (a = 92; a < 99; ++a)
	{
		printf(", %lu", next1 + (next2 / l));
		printf("%lu", next2 % l);
		next1 = next1 + prev1;
		prev1 = next1 - prev1;
		next2 = next2 + prev2;
		prev2 = next2 - prev2;
	}
	printf("\n");
	return (0);
}
