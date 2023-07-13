#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int str_len1, str_len2, len, a, val, num1, num2, *result, b = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	str_len1 = _strlen(s1);
	str_len2 = _strlen(s2);
	len = str_len1 + str_len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (a = 0; a <= str_len1 + str_len2; a++)
		result[a] = 0;
	for (str_len1 = str_len1 - 1; str_len1 >= 0; str_len1--)
	{
		num1 = s1[str_len1] - '0';
		val = 0;
		for (str_len2 = _strlen(s2) - 1; str_len2 >= 0; str_len2--)
		{
			num2 = s2[str_len2] - '0';
			val += result[str_len1 + str_len2 + 1] + (num1 * num2);
			result[str_len1 + str_len2 + 1] = val % 10;
			val /= 10;
		}
		if (val > 0)
			result[str_len1 + str_len2 + 1] += val;
	}
	for (a = 0; a < len - 1; a++)
	{
		if (result[a])
			b = 1;
		if (b)
			_putchar(result[a] + '0');
	}
	if (!b)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
