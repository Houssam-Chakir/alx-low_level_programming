#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - takes last digit and compares
 *
 * Description: print the last digit of the number
 * stored in the variable
 * Return: 0 to hand over control
 */

int main(void)
{
	int n, lastNumber;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastNumber = n % 10;
	if (lastNumber == 0)
	{

		printf("Last digit of %d is %d and is 0\n", n, lastNumber);

	} else if (lastNumber < 6 && lastNumber != 0) {

		 printf("Last digit of %d is %d", n, lastNumber);
		 printf(" and is less than 6 and not 0\n");

	} else if (lastNumber > 5) {

		 printf("Last digit of %d is %d and is greater than 5\n", n, lastNumber);

	}

	return (0);
}
