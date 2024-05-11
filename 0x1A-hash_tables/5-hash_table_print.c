#include <stdio.h>
#include "hash_tables.h"
#define YES 1
#define NO 0

/**
 * hash_table_print - a function to print the key-value pairs in @ht
 * @ht: a hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *branch;
	unsigned long int i;
	char first = YES;
	const char *yes = "'%s': '%s'";
	const char *no = ", '%s': '%s'";
	char *key, *value;

	if (!ht)
		return;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			key = ht->array[i]->key;
			value = ht->array[i]->value;
			printf(first ? yes : no , key , value);
			first = NO;
			if (ht->array[i]->next)
			{
				branch = ht->array[i]->next;
				while (branch != NULL)
				{
					key = branch->key;
					value = branch->value;
					printf(", '%s': '%s'", key , value);
					branch = branch->next;
				}
			}
		}
	}
	putchar('}');
	putchar('\n');
}
