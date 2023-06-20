#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
 */

void print_alphabet_x10(void)
{
	char cron;
	int i;

	i = 0;

	while (i < 10)
	{
		cron = 'a';
		while (cron <= 'z')
		{
			_putchar(cron);
			cron++;
		}
		_putchar('\n');
		i++;
	}
}
