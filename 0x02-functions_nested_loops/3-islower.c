#include "main.h"

/**
 * _islower - checks if a char is lowercase
 *
 * Description: using islower function to check
 * Return: 1 if lowercase and 0 if not
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	} else
	{
		return (0);
	}
}
