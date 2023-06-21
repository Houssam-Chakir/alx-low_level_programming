#include "main.h"

/**
 * _isalpha - checks if a char is an alpha
 * @c: character
 * Description: using ASCII to determine results
 * Return: 1 if alpha and 0 if not
 */

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	return (0);
}
