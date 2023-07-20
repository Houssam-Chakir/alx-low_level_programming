#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints nuumbers
 * @separator: a seperator
 * @n: number of args
 * @...: nmbers
 *
 * Return: line of printed numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0, num;

	va_list args;

	va_start(args, n);

	while (i < n)
	{
		num = va_arg(args, int);

		printf("%d", num);
		if (separator != NULL && i + 1 != n)
			printf("%s", separator);
		i++;
	}

	va_end(args);
	printf("\n");
}
