#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at index
 * @head: pointer to the first node
 * @idx: index
 * @n: data to insert
 *
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *node;
	listint_t *tempo = *head;

	node = malloc(sizeof(listint_t));
	if (!node || !head)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	for (count = 0; tempo && count < idx; count++)
	{
		if (count == idx - 1)
		{
			node->next = tempo->next;
			tempo->next = node;
			return (node);
		}
		else
			tempo = tempo->next;
	}

	return (NULL);
}
