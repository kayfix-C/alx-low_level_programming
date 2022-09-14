#include "main.h"

/**
 * jack_bauer - A prototype that checks main
 *
 * Description: function that prints every minute of the day
 * of Jack Bauer, starting from 00:00 to 23:59.
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int H;
	int M;

	for (H = 0; H < 24; H++)
	{
		for (M = 0; M < 60; M++)
		{
			_putchar((H / 10) + '0');
			_putchar((H % 10) + '0');
			_putchar(':');
			_putchar((M / 10) + '0');
			_putchar((M % 10) + '0');
			_putchar('\n');
		}
	}
}
