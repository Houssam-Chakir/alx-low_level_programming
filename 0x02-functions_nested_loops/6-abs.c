#include "main.h"

/**
 * _abs - give absolute value
 * @n: int param to extract value from
 *
 * Return: calculated absolute value
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}

	_putchar('\n');
}
