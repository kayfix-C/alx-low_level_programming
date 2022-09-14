#include "main.h"

/**
 * times_table - Check main
 *
 * Description: prints the 9 times table, starting with 0.
 *
 * Return: Zero for success
 */

void times_table(void)
{
	int k, l, m;

	for (k = 0; k <= 9; k++)
	{
		for (l = 0; l <= 9; l++)
		{
			n = k * l;

			if ((n / 10) == 0)
			{
				if (l != 0)
					_putchar(' ');
				_putchar(n + '0');

				if (l == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				if (l == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

