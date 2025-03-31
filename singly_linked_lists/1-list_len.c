#include "lists.h"


/**
 * list_len- prints all elements of our linked list
 * @h: the list we want to print
 * Return: The size of the list
 */

size_t list_len(const list_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		h = h->next;
		size++;
	}

	return (size);

}
