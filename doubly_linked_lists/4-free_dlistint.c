#include "lists.h"

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
