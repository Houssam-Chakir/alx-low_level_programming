#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concats two strings
 * @s1: target
 * @s2: to be added
 * @n: starting point
 *
 * Return: pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int l1 = 0, l2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1])
		l1++;
	while (s2[l2])
		l2++;

	if (n >= l2)
		i = l1 + l2;
	else
		i = l1 + n;
	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
		return (NULL);
	l2 = 0;
	while (j < i)
	{
		if (j <= l1)
			ptr[j] = s1[j];
		if (j >= l1)
		{
			ptr[j] = s2[l2];
			l2++;
		}
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
