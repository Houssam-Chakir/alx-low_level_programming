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
	unsigned int count = 0;

	array = malloc(size * sizeof(char));
	if (size <= 0 || array == NULL)
	{
		free(array);
		return (NULL);
	}
	while (size != count)
	{
		array[count] = c;
		count++;
	}
	return (array);
}
