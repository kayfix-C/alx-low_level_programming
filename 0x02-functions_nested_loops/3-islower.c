#include "main.h"

/**
 * _islower - Checks for lowercase xters
 *
 * @k: An input parameter a-z (Success)
 *
 * Return: Always 0 for lowercase and 1 for upper
 */
int _islower(int k)

{
	if (k > 'a' && k < 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
