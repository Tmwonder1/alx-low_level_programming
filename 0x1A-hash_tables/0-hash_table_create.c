#include "hash_table.h"

/**
* hash_table_create - Creates a new hash table of a given size.
* @size: The size of the array.
*
* Return: A pointer to the newly created hash table, or NULL on failure.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i;

	if (size == 0) /* Return NULL if size is 0 */
		return (NULL);

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL) /* Check if the memory allocation failed */
		return (NULL);

	hash_table->size = size;
	hash_table->buckets = malloc(sizeof(node_t *) * size);
	if (hash_table->buckets == NULL)
	{
		free(hash_table); /* Free the hash table allocation fails */
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		hash_table->buckets[i] = NULL; /* Initialize all buckets to NULL */
	}

	return (hash_table);
}

/**
* main - Example usage of creating a hash table.
*
* Return: 0 on success.
*/
int main(void)
{
	unsigned long int size = 10;

	hash_table_t *my_hash_table;

	my_hash_table = hash_table_create(size);
	if (my_hash_table)
	{
		/* Hash table was successfully created */
	}
	else
	{
		/* Failed to create the hash table */
	}
	return (0);
}
