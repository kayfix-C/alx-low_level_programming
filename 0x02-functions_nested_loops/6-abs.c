#include "main.h"

/**
 *_abs - Check main
 *
 * @a: An integer parameter
 *
 * Description: This function returns absolute value of a number
 *
 * Return: Absolute value of a
 */

int _abs(int a)
{
	if (a >= 0)
		return (a);
	else
		return (a * -1);
}
