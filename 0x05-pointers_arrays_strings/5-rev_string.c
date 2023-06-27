#include "main.h"
#include "stdio.h"
/**
 * rev_string - reverses a string
 * @s: characters string
 *
 * Return: reversed string
 */

void rev_string(char *s)
{
	int len = 0, i = 0;
	char tempo;

	while (*(s + i++))
	{
		len++;
	}

	i = len - 1;

	while (i >= len / 2)
	{
		tempo = *(s + i);
		s[i] = s[len - i - 1];
		s[len - i - 1] = tempo;
		i--;
	}
}
