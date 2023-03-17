#include <stdio.h>

/**
 * main - 6-size.c
 * description - a c program that prints the size of types
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)", sizeof(char));
	printf("Size of an int: %zu byte(s)", sizeof(int));
	printf("Size of long int: %zu byte(s)", sizeof(long int));
	printf("Size of long long int: %zu byte(s)", sizeof(long long int));
	printf("Size of float: %zu byte(s)", sizeof(float));
	return (0);
}
