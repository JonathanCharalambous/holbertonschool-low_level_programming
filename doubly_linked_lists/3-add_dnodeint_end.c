#include "lists.h"

/**
 * add_dnodeint_end- prints all elements of a dlistint_t list
 * @head: the head of the list
 * @n: the number to pass
 * Return: The head of the list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;

	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;

	new_node->prev = temp;

	return (new_node);


}
