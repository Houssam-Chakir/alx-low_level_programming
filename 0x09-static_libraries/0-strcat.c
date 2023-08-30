#include <stdio.h>
#include "main.h"

/**
 * *_strcat - string concat'
 * @dest: first part of the string
 * @src: appended part of the string
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int count = 0, index = 0;

	while (dest[count])
	{
		count++;
	}

	while (src[index])
	{
		dest[count] = src[index];
		count++;
		index++;
	}

	return (dest);
}
