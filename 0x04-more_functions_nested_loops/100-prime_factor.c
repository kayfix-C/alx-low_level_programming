#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'a program that finds and prints the largest prime factor
 * of the number 612852475143, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int k = 3, n = 612852475143;

	for (; k < 12057; k += 2)
	{
		while (n % k == 0 && n != k)
			n /= k;
	}

	printf("%lu\n", n);

	return (0);
}
