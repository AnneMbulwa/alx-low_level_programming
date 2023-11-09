#include "hash_tables.h"

/**
 *hash_table_set - function that adds an element to the hash table.
 *@ht: hash table you want to add the key or value
 *@key: key. cannot be an empty string
 *@value: value of the key. value should be a duplicate
 *Return: 1 on success or 0 on failure or otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, a;
	char *sar;
	hash_node_t *add;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	sar = strdup(value);
	if (sar == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (a = index; ht->array[a]; a++)
	{
		if (strcmp(ht->array[a]->key, key) == 0)
		{
			free(ht->array[a]->value);
			ht->array[a]->value = sar;
			return (1);
		}
	}
	add = malloc(sizeof(hash_node_t *));
	if (add == NULL)
		return (0);

	add->key = strdup(key);
	if (add->key == NULL)
	{
		free(add);
		return (0);
	}

	add->value = sar;
	add->next = ht->array[index];
	ht->array[index] = add;

	return (1);
}
