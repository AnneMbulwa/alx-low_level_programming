#include "lists.h"

/**
 *add_nodeint - add new node at beginning of list
 *@head: pointer to listint_t list
 *@n: data of new element
 *Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);

	add->n = n;
	add->next = *head;
	*head = add;

	return (add);
}
