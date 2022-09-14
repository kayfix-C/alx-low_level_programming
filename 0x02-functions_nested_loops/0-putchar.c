#include <unistd.h>
#include "main.h"

/**
 * main - Starting point
 *
 * Description: 'It prints the word: _putchar, followed by a new line'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char test[8] = "_putchar";
	int k;

	for (k = 0; k < 8; k += 1)
		_putchar(test[k]);

	_putchar('\n');

	return (0);
}
