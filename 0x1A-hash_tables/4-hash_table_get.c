#include "hash_tables.h"
/**
 *hash_table_get - Retrives a value associated with a key
 *@ht: The hash table to look into
 *@key: the key you are lookin for
 *Return: the value associated with the element or NUll
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
