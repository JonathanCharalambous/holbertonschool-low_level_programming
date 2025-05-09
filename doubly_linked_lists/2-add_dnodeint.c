#include "lists.h"

/**
 * add_dnodeint- prints all elements of a dlistint_t list
 * @head: the head of the list
 * @n: the number to pass
 * Return: The head of the list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;

	new_node->next = (*head);

	new_node->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = new_node;

	(*head) = new_node;

	return (*head);


}
