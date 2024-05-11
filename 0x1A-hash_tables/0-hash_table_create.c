#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - a function to create a hash table
 * @size: the size of the array of in the hash table
 * Return: to return a pointer to the table or NULL when failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(*table));
	if (table == NULL)
		return (NULL);
	table->array = calloc(size, sizeof(*(table->array)));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	table->size = size;
	return (table);
}
