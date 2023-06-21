#include "main.h"

/**
 * time_table - prints 9 times table
 *
 * Return: 0 ...
 */

void times_table(void)
{
	int n1, n2, r1, r2, r3;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			r1 = n1 * n2;

			if (r1 > 9)
			{
				r2 = r1 % 10;
				r3 =  (r1 -r2) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(r3 + '0');
				_putchar(r2 + '0');
			}
			else
			{
				if (n2 != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(r1 + '0');
			}
		}
		_putchar('\n');
	}
}
