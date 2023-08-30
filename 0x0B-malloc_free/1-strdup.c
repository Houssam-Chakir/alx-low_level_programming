#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - return pointer of dupilcated str'
 * @str: string
 *
 * Return: pointer for newly alocated str
 */

char *_strdup(char *str)
{
	char *array;
	int count = 0, i = 0;
	char *str2 = str;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*str2 != '\0')
	{
		count++;
		str2++;
	}

	array = (char *)malloc((count + 1) * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	str2 = str;

	while (count >= 0)
	{
		array[i] = str2[i];
		i++;
		count--;
	}

	return (array);
}

