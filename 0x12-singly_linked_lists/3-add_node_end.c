#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 *add_node_end - add a new node at the end of list_t
 *@head: pointer to the list_t
 *@str: new string
 *Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	add = malloc(sizeof(list_t));
	if (!add)
		return (NULL);
	add->str = strdup(str);
	add->len = len;
	add->next = NULL;

	if (*head == NULL)
	{
		*head = add;
		return (add);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = add;

	return (add);
}
