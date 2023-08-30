#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - gives string lenght
 * @s: string
 *
 * Return: int string lenght
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s > '\0')
	{
		count += _strlen_recursion(s + 1) + 1;
	}

	return (count);
}
