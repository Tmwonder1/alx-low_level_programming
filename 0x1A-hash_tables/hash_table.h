#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#include <stdlib.h>

/**
* struct node - Node for linked list in hash table buckets.
* @key: Pointer to the key string for the node.
* @value: Pointer to the value string for the node.
* @next: Pointer to the next node in the linked list.
*
* Description: Each node holds a key-value pair and a link to the next node,
* facilitating collision handling through chaining in hash table buckets.
*/
typedef struct node
{
	char *key;

	char *value;

	struct node *next;
} node_t;

/**
* struct hash_table_t - Structure for hash table.
* @size: Number of buckets in the hash table.
* @buckets: Array of pointers to linked list heads for each bucket.
*
* Description: This struct defines the hash table with an array of pointers,
* each pointing to the head of a linked list that manages collisions through
* chaining.
*/
typedef struct hash_table_t
{
	unsigned long int size;

	node_t **buckets;
} hash_table_t;

/* Function prototypes */
hash_table_t *hash_table_create(unsigned long int size);

#endif /* HASH_TABLE_H */
