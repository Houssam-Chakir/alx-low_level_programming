#include "main.h"

/**
 * _puts - prints a string with a new line
 * @str: a string
 *
 * Return: string with a new line
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != 0)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
