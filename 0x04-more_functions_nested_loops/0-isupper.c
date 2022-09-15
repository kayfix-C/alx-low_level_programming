#include "main.h"

/**
 * _isupper - A function that checks for uppercase character.
 * @c: Integer character employed
 * Return: 1 if c is uppercase
 * 0 if otherwise
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
