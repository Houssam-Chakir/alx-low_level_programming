#include "lists.h"
#include <stdio.h>

size_t listint_len_checker(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * listint_len_checker - unique nodes counter
 * @head: pointer to the head
 *
 * Return: the number of unique nodes in the list.
 */
size_t listint_len_checker(const listint_t *head)
{
	const listint_t *x, *y;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	x = head->next;
	y = (head->next)->next;

	while (y)
	{
		if (x == y)
		{
			x = head;
			while (x != y)
			{
				x = x->next;
				y = y->next;
				nodes++;
			}

			x = x->next;
			while (x != y)
			{
				x = x->next;
				node++;
			}

			return (nodes);
		}

		x = x->next;
		y = (y->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - prints listint_t list
 * @head: pointer to head
 *
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, i = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < nodes; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}

