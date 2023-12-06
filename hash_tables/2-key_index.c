#include "hash_tables.h"

/**
 * key_index - index of a key in the hash table
 * @key: The key
 * @size: size of the array of the hash table
 * Return: index at which the key should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);

	return (hash_value % size);
}

