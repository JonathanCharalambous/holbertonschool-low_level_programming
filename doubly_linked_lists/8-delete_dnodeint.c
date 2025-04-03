#include "lists.h"


/**
 * delete_dnodeint_at_index- deletes the node at the designated index
 * @head: head of the list
 * @index: index we want to delete the node from
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *t = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = t->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(t);
		return (1);
	}

	for (i = 0; t != NULL && i < index; i++)
		t = t->next;

	if (t == NULL)
		return (-1);
	if (t->next != NULL)
		t->next->prev = t->prev;
	if (t->prev != NULL)
		t->prev->next = t->next;
	free(t);
	return (1);
}
