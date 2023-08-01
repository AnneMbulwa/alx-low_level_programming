#include "lists.h"

/**
 *pop_listint - deletes head node
 *@head: pointer to listint_t list
 *Return: the head node data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int p;

	if (*head == NULL || head == NULL)
		return (0);
	p = (*head)->n;
	temp = (*head)->next;
	free(*head);

	*head = temp;

	return (p);
}
