#include "lists.h"

/**
 *sum_listint - returns sum of all elements in listint_t
 *@head: pointer to listint_t list
 *Return: sum of all elements
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
