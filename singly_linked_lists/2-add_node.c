#include "lists.h"


/**
 * add_node- copies a string and adds it to a linked list
 * @head: the head of the list
 * @str: The string we want to duplicate and add
 * Return: The head of the list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *my_list;

	my_list = malloc(sizeof(list_t));

	my_list->str = strdup(str);
	if (my_list == NULL)
		return (NULL);

	my_list->len = strlen(str);
	my_list->next = *head;
	*head = my_list;

	return (*head);

}
