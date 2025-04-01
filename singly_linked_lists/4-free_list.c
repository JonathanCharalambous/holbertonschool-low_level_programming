#include "lists.h"


/**
 * free_list- frees up the memory for a linked list
 * @head: The head of our list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp = NULL;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
