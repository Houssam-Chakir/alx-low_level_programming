#include "lists.h"

/**
 * free_listint_safe - frees linked lists
 * @h: pointer to first node
 *
 * Return: the freed list content count
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lenght = 0;
	int num
	listint_t *tempo;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		num = *h - (*h)->next;
		if (num > 0)
		{
			tempo = (*h)->next;
			free(*h);
			*h = tempo;
			lenght++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lenght++;
			break;
		}
	}

	*h = NULL;

	return (lenght);
}

