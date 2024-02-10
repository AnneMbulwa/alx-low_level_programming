#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers using
 * the Jump search algorithm.
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in the list.
 * @value: Value to search for.
 * Return: Pointer to the first node where value location,
 * or NULL if value is not present in the list or if list is null
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *curr, *prev;
	size_t jump, step;

	if (list == NULL)
		return (NULL);

	jump = sqrt(size);
	curr = list;
	prev = NULL;

	while (curr != NULL && curr->n < value)
	{
		prev = curr;
		for (step = 0; step < jump && curr->next != NULL; step++)
			curr = curr->next;

		printf("Value checked at index [%ld] = [%d]\n",
				curr->index, curr->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			prev->index, curr->index);

	while (prev != NULL && prev->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n",
				prev->index, prev->n);
		prev = prev->next;
	}

	if (prev != NULL && prev->n == value)
		return (prev);

	return (NULL);
}
