#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer
 *
 * Return: content inside the deleted elements,
 * or 0 if empty list
 */
int pop_listint(listint_t **head)
{
	listint_t *tempo;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	tempo = (*head)->next;
	free(*head);
	*head = tempo;

	return (number);
}
