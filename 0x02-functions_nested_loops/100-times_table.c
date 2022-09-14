#include "main.h"

/**
 * print_times_table - check the code
 *
 * Description: 'prints times table for numbers from 0-20'
 *
 * @n: Integer parameter used
 *
 * Return: Always 0 (Success)
 */

void print_times_table(int n)
{
	int i;
	int j;

	if (n > 0 && n < 21)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
				putformat(i * j);
			_putchar('\n');
		}
	}
}

/**
 * putformat - prints character format to the output
 * @n: number to format
 * Return: 0 on success
 */

void putformat(int n)
{
	if (n <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
	else if (n > 9 && n <= 99)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(n / 100 + '0');
		_putchar(n / 10 % 10 + '0');
		_putchar(n % 10 + '0');
	}
}
