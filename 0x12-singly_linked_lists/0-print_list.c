#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_list - prints all the elements in list_t
 *@h: pointer to the list_t
 *Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		n++;
		h = h->next;
	}
	return (n);
}
