#include <stdio.h>
#include "main.h"

/**
 * _memset - prints buffer in hexa
 * @s: pointer
 * @b: constant byte
 * @n: mem
 *
 * Returns: nothing
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
