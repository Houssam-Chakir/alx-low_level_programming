#include <stdio.h>
#include "main.h"

/**
 * _strspn - gets of a prefix
 * @s: string to extract prefix from
 * @accept:set of char to accept
 *
 * Return: lenght of prefix as unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i1 = 0, i2, count = 0;

	while (s[i1])
	{
		i2 = 0;

		while (accept[i2])
		{
			if (s[i1] == accept[i2])
			{
				count++;
			}
			i2++;
		}
		if (count == i1)
		{
			return (count);
		}
		i1++;
	}
	return (count);
}
