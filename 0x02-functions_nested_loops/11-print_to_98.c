#include <stdio.h>
#include<unistd.h>
#include "main.h"

/**
 * print_to_98 - Checks the code
 *
 * @n: A defined parameter
 *
 * Description: function that prints all natural numbers
 * from n to 98, followed by a new line.
 *
 * Return: 0 for success
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
