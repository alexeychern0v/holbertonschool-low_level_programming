#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: hash table to look into
 *
 * @key: key
 *
 * Return: value of the associated element, or NULL if key not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	size_t index;
	hash_node_t *get;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	get = ht->array[index];
	while (get)
	{
		if (strcmp(get->key, key) == 0)
		{
			return (get->value);
		}
		get = get->next;
	}
	return (NULL);
}
