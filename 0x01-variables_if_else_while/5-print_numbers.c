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
	int nums = 0;

	while (nums < 10)
	{
		printf("%d", nums);
		nums++;
	}

	putchar('\n');
	return (0);
}
