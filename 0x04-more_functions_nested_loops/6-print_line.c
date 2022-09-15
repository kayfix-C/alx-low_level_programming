#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 * followed by a new line.
 * @n: An input parameter
 * Return: Always 0
 */

void print_line(int n)
{
	int k = 0;

	if (n > 0)
	{
		for (; k < n; k++)
			_putchar('_');
	}
	_putchar('\n');
}
