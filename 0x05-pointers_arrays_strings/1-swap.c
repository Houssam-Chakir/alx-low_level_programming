#include "main.h"

/**
 * swap_int - swwaps values of two args
 * @a: first argument
 * @b: second argument
 *
 * Return: 0 to hand over control to processor
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *b;
	*b = *a;
	*a = x;
}
