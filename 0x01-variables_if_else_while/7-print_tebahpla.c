#include <stdio.h>

/**
 * main - alphabets in reverse
 *
 * Description: looping in reverse
 * Return: 0 to hand over control
 */

int main(void)
{
	int index = 122;

	while (index > 96)
	{
		putchar(index);
		index--;
	}

	putchar('\n');
	return (0);
}
