#include "lists.h"


/**
 * add_node_end- copies a string and adds it to the end of linked list
 * @head: the head of the list
 * @str: The string we want to duplicate and add
 * Return: The head of the list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t)), *temp;
	size_t length = 0;

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	while (str[length])
		length++;
	new_node->len = length;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
	return (new_node);
}
