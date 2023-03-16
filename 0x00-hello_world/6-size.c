#include <stdio.h>

/**
 * main - 6-size.c
 * description - a c program that prints the size of types
 *
 * Return: Always 0 (success)
 */
int main(void);
{
	printf("Size of a char: %d byte(s)", sizeof(char));
	printf("Size of an int: %d byte(s)", sizeof(int));
	printf("Size of long int: %d byte(s)", sizeof(long int));
	printf("Size of long long int: %d byte(s)", sizeof(long long int));
	printf("Size of float: %d byte(s)", sizeof(float));
	return (0);
}
