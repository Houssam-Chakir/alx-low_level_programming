#include "main.h"

/**
 * print_alphabet - prints alphabets
 *
 * Description: funtion to print alphabets in lower case\
 * Return: a character.
 */

void print_alphabet(void)
{
	int index = 97;

	while (index < 123)
	{
		_putchar(index);
		index++;
	}

	_putchar('\n');
}
