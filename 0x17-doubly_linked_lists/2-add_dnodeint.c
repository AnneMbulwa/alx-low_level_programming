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
	dlistint_t *h;

	add = malloc(sizeof(dlistint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = NULL;

	h = *head;
	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = add;
	}
	else
		*head = add;
	add->prev = h;

	return (add);
}
