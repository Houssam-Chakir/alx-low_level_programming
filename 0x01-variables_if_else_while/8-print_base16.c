#include <stdio.h>

/**
 * main - prints base 16 numbers
 *
 * Description: using loops to print base 16 numbers
 * Return: 0 to hand over control
 */

int main(void)
{
	int index = 0;
	while (index < 58)
	{
		putchar(index);
		index++;
	}

	index = 97;

	while (index < 103)
	{
		putchar(index);
		index++;
	}

	putchar('\n');
	return (0);
}
