#include "lists.h"

/**
 *find_listint_loop - finds the loop int listint_t list
 *@head: pointer to listint_t list
 *Return: address of node where loop start or NULL otherwise
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *rise = head;
	listint_t *fall = head;

	if (!head)
		return (NULL);
	while (fall != NULL && fall->next != NULL)
	{
		rise = rise->next;
		fall = fall->next->next;
		if (rise == fall)
		{
			rise = head;
			while (rise != fall)
			{
				rise = rise->next;
				fall = fall->next;
			}
			return (fall);
		}
	}
	return (NULL);
}
