#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: 'Printing to the stderr without common functions'
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	char err[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-199\n";

	write(2, err, 59);

	return (1);
}
