#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - give power raised by x
 * @x: value to raise with
 * @y: value to raise
 *
 * Return: interger of raised power of value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return x * _pow_recursion(x, y - 1);
	}
	return (1);
}
