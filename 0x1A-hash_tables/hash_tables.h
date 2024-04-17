#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>
#include <string.h>

/**
* struct hash_node_s - Node of a hash table
* @key: The key, string (The key is unique in the HashTable)
* @value: The value corresponding to a key
* @next: A pointer to the next node of the List
*
* Description: Nodes stored in the array of the hash table, where
* each node represents a key-value pair within the hash table.
*/
typedef struct hash_node_s
{
	char *key;

	char *value;

	struct hash_node_s *next;
} hash_node_t;

/**
* struct hash_table_s - Hash table data structure
* @size: The size of the array
* @array: An array of size @size
* Each cell of this array is a pointer to the first node of a linked list,
* which facilitates handling collisions by chaining.
*
* Description: A hash table data chaining for collision handling.
*/
typedef struct hash_table_s
{
	unsigned long int size;

	hash_node_t **array;
} hash_table_t;

/* Function Prototypes */
hash_table_t *hash_table_create(unsigned long int size);

#endif /* HASH_TABLES_H */
