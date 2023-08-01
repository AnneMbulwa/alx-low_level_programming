#include "lists.h"

/**
 *free_listint_safe - frees listint_t list
 *@h: pointer to listint_t list
 *Return: free'd elements
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int num;
	listint_t *tmp;

	if (h == NULL || *h == NULL)
		return (0);
	while (*h)
	{
		num = *h - (*h)->next;
		if (num > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}
	*h = NULL;

	return (count);
}
