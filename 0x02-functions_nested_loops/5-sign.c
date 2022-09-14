#include "main.h"

/**
 * print_sign - Prototype
 *
 * @n: a parameter
 *
 * Description: 'a function that prints the sign of a number'
 *
 * Return: 1 if number is +ve, 0 if number is 0,
 * -1 if number is -ve
 */
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}

	return (value);
}
