#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: An input parameter
 *
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
	int k = 0, l;

	if (n > 0)
	{
		for (; k < n; k++)
		{
			for (l = 0; l < k; l++)
				_putchar(' ');
		_putchar(92);
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
