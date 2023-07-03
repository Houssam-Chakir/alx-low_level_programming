#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates a character
 * @s: string
 * @c: character to locate
 *
 * Return: pointer to character
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
