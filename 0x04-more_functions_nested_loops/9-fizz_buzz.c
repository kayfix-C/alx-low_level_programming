#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'a program that prints the numbers from 1 to 100,
 * followed by a new line. But for multiples of three print Fizz
 * instead of the number and for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five
 * print FizzBuzz'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int k = 1;

	for (; k < 100 ; k++)
	{
		if (k % 3 == 0 && k % 5 == 0)
			printf("FizzBuzz ");

		else if (k % 3 == 0)
			printf("Fizz ");

		else if (k % 5 == 0)
			printf("Buzz ");

		else
			printf("%d ", k);
	}

	printf("Buzz\n");

	return (0);
}
