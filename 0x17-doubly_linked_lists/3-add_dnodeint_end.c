#include "lists.h"

/**
 *add_dnodeint_end -  adds a new node at the end of a dlistint_t list.
 *@head: pointer to first node in the list
 *@n: element value
 *Return: address of new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last;
	dlistint_t *h;

	last = malloc(sizeof(dlistint_t));
	if (last == NULL)
		return (NULL);
	last->n = n;
	last->next = NULL;

	h = *head;
	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = last;
	}
	else
		*head = last;
	last->prev = h;

	return (last);
}
