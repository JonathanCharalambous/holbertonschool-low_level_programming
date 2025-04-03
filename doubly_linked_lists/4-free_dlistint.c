#include "lists.h"
/**
 * free_dlistint- frees up head of a list
 * @head: the head of a list
 * Returm: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}


}
