#include <stdio.h>

/**
 * main - listing all alphabets
 *
 * Description: using a loop to print
 * all alphabets in lower case
 * Return: 0 to hand over control
 */

int main(void)
{
	int index = 97;

	while (index < 123)
	{
		putchar(index);
		index++;
	}
	putchar('\n');

	return (0);
}
