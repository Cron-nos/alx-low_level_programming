#include <stdio.h>
/**
 *main - Entry
 *
 *Return: Nil
 */
int main(void)
{
	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("size of an int: %lu bytes(s\n)", sizeof(int));
	printf("Size of long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of long long: %lu byte(s)\n", sizeof(long long int));
	printf("Size of float: %lu byte(s)", sizeof(float));
	return (0);
}

