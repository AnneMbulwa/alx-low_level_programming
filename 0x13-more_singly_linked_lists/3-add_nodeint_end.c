#include "lists.h"

/**
 *add_nodeint_end - adds new node at the end of listint_t list
 *@head: pointer to listint_t
 *@n: data of new node
 *Return: address of new element or NULL if fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last;
	listint_t *temp = *head;

	last = malloc(sizeof(listint_t));

	if (last == NULL)
		return (NULL);
	last->n = n;
	last->next = NULL;

	if (*head == NULL)
	{
		*head = last;
		return (last);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = last;
	return (last);
}
