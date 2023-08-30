#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: where src to be copied
 * @src: to be copied
 * @n: amout of byted to be copied
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
