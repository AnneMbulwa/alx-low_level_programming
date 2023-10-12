#include "lists.h"

/**
 *get_dnodeint_at_index - function that returns the nth node of a
 *dlistint_t linked list.
 *@head: pointer to the first node in the list
 *@index:  index of the node, starting from 0
 *Return: the node at index or null if does not exists
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int num  = 0;

	if (!head)
		return (NULL);

	for (num = 0; num < index; num++)
	{
		if (head->next)
			head = head->next;
		else
			return (NULL);
	}
	return (head);
}
