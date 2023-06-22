#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - P all natural nums from n to 98
 * @n: starting point num
 * Return: 0 ...
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (;n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n ==98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
}
