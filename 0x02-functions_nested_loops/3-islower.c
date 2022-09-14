#include "main.h"

/**
 * _islower - Checks for lowercase xters
 *
 * Return: Always 0 (Success).
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
