#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @last: obtains last digit of a number
 *
 * Return: value of the last digit
 */

int print_last_digit(int last)
{
	int try;

	if (last < 0)
		last = -last;

	try = last % 10;

	if (try < 0)
		try = -try;

	_putchar(try + '0');

	return (try);
}
