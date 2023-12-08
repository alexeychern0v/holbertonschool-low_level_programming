#include "hash_tables.h"

/**
 * key_index - return the index of a key
 *
 * @key: key
 *
 * @size: size of the array of the hash table
 *
 * Return: the index of the key
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (!key || size == 0)
		return (0);
	index = hash_djb2(key) % size;
	return (index);
}
