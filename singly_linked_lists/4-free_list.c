#include "lists.h"


/**
 * free_list- frees up the memory for a linked list
 * @head: The head of our list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp = NULL;

	while (head != NULL)
	{
		temp = head->next;
		head = temp;
		free(temp);
		free(head->str);

	}
}
