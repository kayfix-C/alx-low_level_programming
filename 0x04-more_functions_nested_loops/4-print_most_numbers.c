#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9.
 * followed by a new line
 * but skips 2 and 4
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int k = '0';

	for (; k <= '9'; k++)
	{
		if (k != '2' && k != '4')
			_putchar(k);
	}
	_putchar('\n');
}
