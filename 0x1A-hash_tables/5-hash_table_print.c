#include "hash_tables.h"
/**
 *hash_table_print - prints a hash table.
 *@ht: the hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int printed = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *current = ht->array[i];

		while (current != NULL)
		{
			if (printed)
			{
				printf(", ");
			}
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			printed = 1;
		}
	}
	printf("}\n");
}
