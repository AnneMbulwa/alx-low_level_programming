#include "lists.h"
/**
 *print_dlistint -  prints all the elements of a dlistint_t list.
 *@h: pointer to head node in list
 *Return: number of elements in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		printf("%d\n" h->n);
		counter++;

		h = h->next;
	}
	return (counter);
}
