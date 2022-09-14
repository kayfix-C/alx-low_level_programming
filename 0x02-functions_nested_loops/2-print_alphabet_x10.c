#include "main.h"

/**
 * print_alphabet_x10 - Uses _putchar function to print
 * small alphabets ten times
 *
 * Return: Always 0 (Success).
 */

void print_alphabet_x10(void)
{
	char k;
	int a;

	for (a = 0; a < 10; a += 1)
	{
		for (k = 'a'; k <= 'z'; k++)
			_putchar(k);

		_putchar('\n');
	}
}
