#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempo = *head;
	listint_t *actual = NULL;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tempo);
		return (1);
	}
	while (count < index - 1)
	{
		if (!tempo || !(tempo->next))
			return (-1);
		tempo = tempo->next;
		count++;
	}


	actual = tempo->next;
	tempo->next = actual->next;
	free(actual);

	return (1);
}
