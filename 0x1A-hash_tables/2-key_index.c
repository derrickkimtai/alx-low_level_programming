#include "hash_tables.h"
/**
 *key_index - finds the index by hashing
 *@key: key to be hashed to find the index
 *@size: to find the size
 *Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
