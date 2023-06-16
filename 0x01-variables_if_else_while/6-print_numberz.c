#include <stdio.h>

/**
 * main - prints all single digit numbers
 *
 * Description: using loop to print base 10
 * single digits until 9
 * Return: 0 to hand over control
 */

int main(void)
{
	int num = 48;

	while (num < 58)
	{
		putchar(num);
		num++;
	}

	putchar('\n');
	return (0);
}
