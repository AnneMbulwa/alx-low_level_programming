#include "hash_tables.h"

/**
 *hash_table_create - creates a hash table.
 *@size: size of an array
 *Return: pointer to the newly created table or
 *Null otherwise
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	unsigned long int a;

	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *)* size);
	if (table->array == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		table->array[a] = NULL;
	return (table);
}
