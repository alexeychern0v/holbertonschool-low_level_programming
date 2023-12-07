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
	hash_table_t *htable = malloc(sizeof(hash_table_t));

	if (htable == NULL)
		return (NULL);
	htable->size = size;
	htable->array = calloc(htable->size, sizeof(hash_node_t *));
	if (htable->array == NULL)
		return (NULL);
	return (htable);
}
