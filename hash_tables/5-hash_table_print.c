#include "hash_tables.h"

/**
 * hash_table_print - print a hash table\
 *
 * @ht: hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	size_t index;
	int first = 1;

	if (!ht)
		return;
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index])
		{
			if (first)
				printf("{");
			else
				printf(", ");
			current = ht->array[index];
			while (current)
			{
				printf("'%s': '%s'", current->key, current->value);
				current = current->next;
				if (current)
					printf(", ");
			}
			first = 0;
		}
	}
	printf("}\n");
}
