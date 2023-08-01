#include "lists.h"

/**
 *reverse_listint - reverses listint_t list
 *@head: pointer to listint_t list
 *Return: pointer to the first node reversed
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;

	return (*head);
}
