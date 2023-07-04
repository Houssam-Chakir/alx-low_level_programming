#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - locates first occurence of a char in a string
 * @s: string to check
 * @accept: char to accept in s
 *
 * Return: pointer to the first occurence
 */

char *_strpbrk(char *s, char *accept)
{
	int i1 = 0, i2;

	while (s[i1])
	{
		i2 = 0;
		while (accept[i2])
		{
			if (accept[i2] == s[i1])
			{
				return (&s[i1]);
			}
			i2++;
		}
		i1++;
	}
	return (NULL);
}
