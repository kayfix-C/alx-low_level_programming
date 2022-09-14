#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int f;
	long int fibonacci[50];

	fibonacci[0] = 1;
	fibonacci[1] = 2;
	printf("%ld, %ld, ", fibonacci[0], fibonacci[1]);

	for (f = 2; f < 50; f++)
	{
		fibonacci[f] = fibonacci[f - 1] + fibonacci[f - 2];
		if (f == 49)
			printf("%ld\n", fibonacci[f]);
		else
			printf("%ld, ", fibonacci[f]);
	}

	return (0);
}
