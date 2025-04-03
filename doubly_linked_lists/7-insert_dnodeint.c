#include "lists.h"


/**
 * insert_dnodeint_at_index- returns the node at the designated index
 * @h: head of the list
 * @idx: index we want to get the node from
 * @n: the number we want to add
 * Return: the value at the index
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *t = *h;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (i = 0; t != NULL && i < idx - 1; i++)
		t = t->next;
	if (t == NULL)
		return (NULL);
	if (t->next == NULL)
		return (add_dnodeint_end(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = t->next;
	new_node->prev = t;
	if (t->next != NULL)
		t->next->prev = new_node;
	t->next = new_node;
	return (new_node);
}
