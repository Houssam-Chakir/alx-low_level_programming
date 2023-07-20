#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - calcs square root
 * @n: integer
 *
 * return: square root
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n < 0 || n % 2 != 0)
	{
		return (-1);
	}

	return (_sqrt_recursion(n) / 2);
}
