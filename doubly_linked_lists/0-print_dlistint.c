#include "lists.h"

/**
 * print_dlistint- prints all elements of a dlistint_t list
 * @h: the head of the list
 * Return: The number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;

	}

	return (n);


}
