#include "hash_tables.h"

/**
 *hash_table_print - function that prints a hash table.
 *@ht: hash table
 *Description: print the key/value in the order that they appear
 *in the array of hash table: Order: array, list
 *Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int a;
	unsigned char x = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a] != NULL)
		{
			if (x == 1)
				printf(", ");
			node = ht->array[a];
			while (node != NULL)
			{
				printf("'%s':, '%s': ", node->key, node->value);
				node = node->next;
				while (node != NULL)
					printf(", ");
			}
			x = 1;
		}
	}
	printf("}\n");
}
