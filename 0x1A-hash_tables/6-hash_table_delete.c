#include "hash_tables.h"
/*steps*/
/*check if there is collision chain for the index to delete*/
/*if collision exists, remove the elements and shift the links accordingly*/
/*free the elements*/

/**
 *
 *
 */
void free_list(hash_node_t *head)
{
	hash_node_t *val;

	while(head)
	{
		val = head->next;
		free(head->key);
		free(head->value);
		free(head);
		head = val;
	}
}

/**
 *hash_table_delete - function that deletes hash table
 *@ht: hash table
 *Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int a;

	if (!ht)/*check if hash table is empty*/
		return;
	for (a = 0; a < ht->size; a++)
		free_list(ht->array[a]);
	free(ht->array);
	free(ht);
}
