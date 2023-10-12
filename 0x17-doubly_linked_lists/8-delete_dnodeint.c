#include "lists.h"

/**
 *delete_dnodeint_at_index - deletes the node at index index of
 *dlistint_t linked list.
 *@head: double pointer to head node
 *@index:  index of the node that should be deleted. Index starts at 0
 *Return: 1 0n success or -1 on fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del;
	dlistint_t *temp;

	if (!head)
	{
		del = *head;
		if (index < 1)
		{
			if (!del)
				return (-1);
			*head = del->next;
			if (*head)
				(*head)->prev = NULL;
			free(del);
			return (1);
		}
		for (; del; del = del->next, index--)
		{
			if (index - 1 == 0)
			{
				temp = del->next;
				if (!temp)
					break;
				del->next = temp->next;
				if (temp->next)
					temp->next->prev = del;
				free(temp);
				return (1);
			}
		}
	}
	return (-1);
}
