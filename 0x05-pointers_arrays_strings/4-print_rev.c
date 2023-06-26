#include "main.h"

/**
 * print_rev - prints a string in reverese with a new line
 * @s: a string
 *
 * Return: string with a new line
 */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != 0)
	{
		i++;
	}

	while (i != -1)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
