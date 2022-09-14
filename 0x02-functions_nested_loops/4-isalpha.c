#include "main.h"

/**
 * _isalpha - employed prototype
 *
 * @k: Parameter used
 *
 * Description: 'A function that checks for alphabetic character'
 * .
 * Return: 1 if k is a letter, lowcase or upper
 * otherwise, 0
 */
int _isalpha(int k)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower += 1)
	{
		for (upper = 'A'; upper <= 'Z'; upper += 1)
		{
			if (k == lower || k == upper)
				isletter = 1;
		}
	}

	return (isletter);
}
