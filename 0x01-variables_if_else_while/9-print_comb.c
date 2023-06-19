#include <stdio.h>

/**
 * main - prints all possible combinations of single digits
 *
 * Description: using loops and conditions to print
 * numbers followed by a comma
 * Return: 0 to hand over control
 */

int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
		if (num < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
