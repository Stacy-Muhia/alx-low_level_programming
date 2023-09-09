#include "hash_tables.h"

/**
 * key_index - functions to return a the key to the index
 * @size: size of the array of the hash table
 * @key : index key
 *
 * Return:  index at which the key/value pair should
 * be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size);
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
