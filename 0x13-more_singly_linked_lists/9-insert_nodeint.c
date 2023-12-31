#include "lists.h"

/**
 *insert_nodeint_at_index - inserts new node at given index
 *@head: pointer to listint_t list
 *@idx: index of new node
 *@n: data of new node
 *Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	listint_t *temp = *head;
	unsigned int num = 0;

	ptr = malloc(sizeof(listint_t));
	if (!head || !ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}
	while (temp && num < idx)
	{
		if (num == idx - 1)
		{
			ptr->next = temp->next;
			temp->next = ptr;
			return (ptr);
		}
		else
		{
			temp = temp->next;
			num++;
		}
	}
	return (ptr);
}
