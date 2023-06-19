#include <stdio.h>

#include <stdint.h>

#include <stddef.h>

/**
 * main - Program that prints the size of various types on the computer.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	printf("Size of a uint8_t: %zu byte(s)\n", sizeof(uint8_t));
	printf("Size of a size_t: %zu byte(s)\n", sizeof(size_t));

	return (0);
}
