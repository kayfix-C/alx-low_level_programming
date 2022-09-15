#include "main.h"
void print_integer(int k);

/**
 * print_number - a function that prints an integer.
 *
 * @n: Integer parameter
 *
 * Return: Always 0 (Success)
 */

void print_number(int n)
{
	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		print_integer(n * -1);
	}
	else
		print_integer(n);
}

/**
 * print_integer - A function to print n
 *
 * @k: an unsigned integer parameter
 *
 * Return: Always 0 (Success)
 */
void print_integer(int k)
{
	int i = 1000000000;

	for (; i >= 1; i /= 10)
		if (k / i != 0)
		{
			_putchar((k / i) % 10 + '0');
		}
}
