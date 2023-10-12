#include "lists.h"

/**
 *insert_dnodeint_at_index -  inserts a new node at a given position.
 *@h: points to the head node of the linked list
 *@idx: index of the list where the new node should be added. Index starts at 0
 *@n: integer or postion of new node
 *Return: address of the new node at index or NULL otherwise
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *add;
	dlistint_t *temp;/*tranverse*/

	add = malloc(sizeof(dlistint_t));
	if (!add | !h)
		return (add ? free(add), NULL : NULL);

	temp = *h;/*points to the head node*/
	add->n = n;

	if (!idx)
	{
		add->prev = NULL;
		add->next = temp ? temp : NULL;
		if (temp)
			temp->prev = add;

		return (*h = add);
	}

	for (; temp; temp = temp->next, idx--)
	{
		if (idx - 1 == 0)
		{
			add->prev = temp;
			add->next = temp->next;
			if (add->next)
				add->next->prev = add;
			temp->next = add;
			return (add);
		}
	}
	return (free(add), NULL);
}
