#include <stdio.h>

/**
 * main - using sizeof to dynamically dtermine the size of types cahr, int and float.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	printf("Size of tyepe 'char' on my computer: %lu bytes\n", sizeof(char));
	printf("Size of type 'int' on my computer %lu byts\n", sizeof(int));
	printf("Size of 'float' on my computer: %lu bytes\n", sizeof(float));
	printf("Size of of my variable n on my computer: %lu bytes\n", sizeof(n));
	return (0);
}
