#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: characters to be used
 *
 * Return: 0 for success
 */

char *create_array(unsigned int size, char c)
{
	char *array = NULL;

	if (size > 0)
	{
		size++;
		array = malloc(size * sizeof(char));
		while (size > 0)
		{
			array[size] = c;
			size--;
		}
		array[0] = c;
	}

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	return (array);
}
