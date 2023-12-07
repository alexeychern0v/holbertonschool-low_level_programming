#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 *
 * @size: size of an array
 *
 * Return: pointer to the newly created hash table or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	size_t i;
	hash_table_t *htable = malloc(sizeof(hash_table_t));

	if (!htable)
		return (NULL);
	if (!size)
		return (NULL);
	htable->size = size;
	htable->array = malloc(size * sizeof(hash_table_t *));
	if (!htable->array)
		return (NULL);
	for (i = 0; i < size; i++)
		htable->array[i] = NULL;
	return (htable);
}
