#include "lists.h"
#include <stdio.h>
/**
 *free_list - frees list
 *@head: pointer to list_t
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);

		head = temp;
	}
}
