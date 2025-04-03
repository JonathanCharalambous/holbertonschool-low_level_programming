#include "lists.h"

/**
 * get_dnodeint_at_index- returns the node at the designated index
 * @head: head of the list
 * @index: index we want to get the node from
 * Return: the value at the index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	for (n = 0; n < index; n++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
