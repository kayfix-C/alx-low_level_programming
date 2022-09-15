#include "main.h"

/**
 * print_triangle -  Employed prototype.
 *
 * Description: 'a function that prints a triangle, followed by a new line'
 *
 * @size: An integer parameter (size of the triangle)
 *
 * Return: Always 0 (Triangle if size is int
 * and new line if size is 0 or less)
 */
void print_triangle(int size)
{
	int k = 0, l, n = size - 1;

	if (size > 0)
	{
		for (; k < size; k++)
		{
			for (l = 0; l < size; l++)
			{
				if (l < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
