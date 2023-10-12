#include "lists.h"

/**
 *free_dlistint - frees a dlistint_t list.
 *@head: poionter to the first node
 *Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *vree;

	while (head)
	{
		free = head;
		head = head->next;
		free(vree);
	}
}
