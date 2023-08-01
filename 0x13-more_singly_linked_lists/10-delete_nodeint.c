#include "lists.h"

/**
 *delete_nodeint_at_index - deletes node at index
 *@head: pointer to listint_t list
 *@index: index of node
 *Return: 1 seccess or -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head;
	listint_t *previous = NULL;
	unsigned int num = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	while (num < index - 1)
	{
		if (!ptr || !(ptr->next))
			return (-1);
		ptr = ptr->next;
		num++;
	}

	previous = ptr->next;
	ptr->next = previous->next;
	free(previous);

	return (1);
}
