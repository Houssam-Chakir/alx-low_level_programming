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
	char *array = NULL;
	int count = 0, i = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}

	array = (char *) malloc((count + 1) * sizeof(char));

	while (count >= 0)
	{
		*(array + i) = *(str + i);
		count--;
		i++;
	}

	if (array == NULL)
	{
		return (NULL);
	}

	return (array);
}
