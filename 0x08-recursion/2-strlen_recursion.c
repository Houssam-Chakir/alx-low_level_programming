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
	static int count;

	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		count++;
	}
	return (count);
}
