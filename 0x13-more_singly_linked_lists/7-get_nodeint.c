#include "lists.h"

/**
 *get_nodeint_at_index - returns nth node of listint_t list
 *@head: pointer to listint_t
 *@index: index of node
 *Return: nth node of listint_t list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int num = 0;

	while (tmp && num < index)
	{
		tmp = tmp->next;
		num++;
	}
	return (tmp ? tmp : NULL);
}
