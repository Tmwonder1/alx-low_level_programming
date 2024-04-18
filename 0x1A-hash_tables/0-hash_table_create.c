#include "hash_tables.h"

unsigned long int hash(const char *str, unsigned long int size);

/**
* hash_table_set - Adds an element to the hash table.
* @ht: pointer to the hash table
* @key: the key to add - cannot be an empty string
* @value: the value associated with the key
*
* Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	hash_node_t *new_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = hash(key, ht->size);

	/* Allocate and setup new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}

	/* Insert node at the beginning of the linked list */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

/**
* hash - Basic hash function to compute the index of a key
* @str: the string to hash
* @size: the size of the array
*
* Return: The computed hash
*/
unsigned long int hash(const char *str, unsigned long int size)
{
	unsigned long int hash = 5381;

	int c;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash % size);
}
