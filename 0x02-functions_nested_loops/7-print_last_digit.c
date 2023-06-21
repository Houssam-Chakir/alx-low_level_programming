#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: targeted number
 *
 * Return: last number of target number
 */

int print_last_digit(int n)
{
	int lastNumber = n % 10;
	if (lastNumber < 0)
	{
		lastNumber = -lastNumber;
	}
	_putchar(lastNumber + '0');
	return (0);
}
