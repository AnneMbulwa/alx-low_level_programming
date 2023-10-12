#include "lists.h"

/**
 *dlistint_len - returns the number of elements in list
 *@h: pointer to the head node in list
 *Return: number of nodes in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int num = 0;

	if (h == NULL)
		return (num);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
