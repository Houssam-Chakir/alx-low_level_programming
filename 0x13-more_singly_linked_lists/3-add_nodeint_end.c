#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end
 * @head: pointer
 * @n: data
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *tempo = *head;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while (tempo->next)
		tempo = tempo->next;

	tempo->next = node;

	return (node);
}
