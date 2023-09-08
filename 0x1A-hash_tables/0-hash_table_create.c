#include "hash_tables.h"

/**
 * hash_table_create -  functions to create a hash table
 * @size: the specific size of the hash table
 *
 * Return: Pointer to the newly created hash table, else NULL(wrong)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int x;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = (hash_node_t **) calloc(table->size, sizeof(hash_node_t *));

	for (x = 0; x < table->size; x++)
		table->array[x] = NULL;

	return (table);
}
