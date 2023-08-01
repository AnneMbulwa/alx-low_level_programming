#include "lists.h"

/**
 *free_listint - function that frees listint_t list
 *@head: pointer to listint_t
 *Return: reed elements
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);

		head = tmp;
	}
}
