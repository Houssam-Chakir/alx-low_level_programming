#include <stdarg.h>

/**
 * sum_them_all - sums all arguments
 * @n: number of arguments
 * @...: arguments
 *
 * Return: sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, s = 0;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	while (i < n)
	{
		int x = va_arg(args, int);

		s += x;
		i++;
	}
	va_end(args);

	return (s);
}
