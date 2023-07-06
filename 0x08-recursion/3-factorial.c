#include <stdio.h>
#include "main.h"

/**
 * factorial - give factorial number
 * @n: integer
 *
 * Return: factorial NUMBER
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
