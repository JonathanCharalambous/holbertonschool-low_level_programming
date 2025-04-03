#include "lists.h"

/**
 * dlistint_len- prints len of a dlistint_t list
 * @h: the head of the list
 * Return: The number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;

	}

	return (n);


}
