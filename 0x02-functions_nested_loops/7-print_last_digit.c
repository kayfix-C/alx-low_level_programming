#include "main.h"

/**
 * print_last_digit - Prototype that checks main
 *
 * @n: A +Ve or -ve non-decimal parameter
 *
 * Description: This function prints the last digit of a number
 *
 * Return: last digit of any number, n
 */
int print_last_digit(int n)
{
	int m;

	if (n < 0)
		m = -1 * (n % 10);
	else
		m = n % 10;

	_putchar((m % 10) + '0');

	return (m % 10);
}
