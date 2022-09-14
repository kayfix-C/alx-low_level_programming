#include<stdio.h>
#include "main.h"
/**
 * main - Where execution starts
 *
 * Description: 'Printing putchar to the stdo'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char [] = "_putchar";
	int k = 0;

	for (k < 8)
	{
		_putchar([k]);
		k += 1;
	}

	_putchar('\n');
	return (0);

}
