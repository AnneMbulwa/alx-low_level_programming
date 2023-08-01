#include "lists.h"

listint_t *find_listint_loop_y(listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 *find_listint_loop_y - finds the loop in listint_t
 *@head: pointer to listint_t list
 *Return: address of where loop start or NULL otherwise
 */
listint_t *find_listint_loop_y(listint_t *head)
{
	listint_t *first, *last;

	if (head == NULL)
		return (NULL);
	last = head->next;
	while (last != NULL)
	{
		if (last == last->next)
			return (last);
		first = head;
		while (first != last)
		{
			if (first == last->next)
				return (last->next);
			first = first->next;
		}
		last = last->next;
	}
	return (NULL);
}

/**
 *print_listint_safe - print listint_t list
 *@head: pointer to listint_t list
 *Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;
	int index;
	listint_t *ptr;

	ptr = find_listint_loop_y((listint_t *) head);

	while ((head != ptr || index) && head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		if (head == ptr)
			index = 0;
		head = head->next;
		len++;
	}

	if (ptr != NULL)
		printf("-> [%p] %d\n", (void *)head, head->n);
	return (len);
}
