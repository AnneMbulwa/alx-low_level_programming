#include "lists.h"

/**
 *add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 *@head: ponter to the first node of list
 *@n: element value
 *Return: address of new node location
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add;

	add = malloc(sizeof(dlistint_t));

	if (!head | !add)
		return (add ? free(add), NULL : NULL);
	add->n = n;
	add->next = NULL;

	if (!*head)
	{
		*head = add;
		add->next = NULL;
	}
	else
	{
		add->next = *head;
		(*head)->prev = add;
		*head = add;
	}
	return (add);
}
