#include "hash_tables.h"

/**
 * hash_table_delete - A function thaat deletes a hash table.
 * @ht: Pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *tmp;
	unsigned long int f;

	for (f = 0; f < ht->size; f++)
	{
		if (ht->array[5] != NULL)
		{
			node = ht->array[f];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
