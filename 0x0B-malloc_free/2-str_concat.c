#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - concat two str
 * @s1: first str
 * @s2: second str
 *
 * Return: a pointer
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, l1, l2, l;
	char *result;

	l1 = l2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
		{
			l1++;
		}
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
		{
			l2++;
		}
	}

	l = l1 = l2;
	result = (char *)malloc(sizeof(char) * (l + 1));
	if (result == NULL)
	{
		return (NULL);
	}

	while (i < l1)
	{
		i = 0;
		result[i] = s1[i];
		i++;
	}
	while (j < l2)
	{
		j = 0;
		result[i] = s2[j];
		j++;
	}
	result[l] = '\0';

	return (result);
}
