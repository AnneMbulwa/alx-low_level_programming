#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 *add_node - adds a new node at the beginning of list_t
 *@head: pointer to the header
 *@str: new string
 *Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;
	unsigned int len = 0;

	while (str[len])
		len++;
	add = malloc(sizeof(list_t));

	if (!add)
		return (NULL);
	add->str = strdup(str);
	add->len = len;
	add->next = *head;

	*head = add;

	return (*head);
}
