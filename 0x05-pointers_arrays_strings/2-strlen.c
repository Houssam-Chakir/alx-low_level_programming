#include "main.h"

/**
 * _strlen - gives lenght of a string
 * @s: string
 *
 * return: lenght of a string
 */

int _strlen(char *s)
{
	int index = 0;

	while(*(s + index) != 0)
	{
		index++;
	}
	return (index);
}
