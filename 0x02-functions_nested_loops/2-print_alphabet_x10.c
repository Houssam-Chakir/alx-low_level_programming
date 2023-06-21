#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 -  prints for 10 times
 *
 * Description: prints lines of alphabets 10 times
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	void print_alphabet(void);

	int times = 10;

	while (times > 0)
	{
		int index = 97;

		while (index < 123)
		{
			_putchar(index);
			index++;
		}
		times--;
		_putchar('\n');
	}
}
