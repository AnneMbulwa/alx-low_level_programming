#include "lists.h"

/**
 *free_listint2 - frees listint_t
 *@head: pointer to listint_t
 *Return: free'd elements
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head == NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	if (*head == NULL)
		return;
	*head = NULL;
}
