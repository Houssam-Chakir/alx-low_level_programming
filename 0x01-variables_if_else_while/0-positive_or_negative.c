#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - asigns random number to n and evaluates it
 *
 * Description: if n is positive or negative
 * or equal zero it will describe that in stdout
 * Return: returns 0 to hand over control
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
