#include <stdlib.h>
#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *front;
	hash_node_t *back;
	unsigned long int i;

	if (!ht)
		return;
	i = 0;
	while (i < ht->size)
	{
		if (ht->array[i] && ht->array[i]->next)
		{
			front = ht->array[i]->next;
			while (front != NULL)
			{
				back = front;
				front = front->next;
				free(back->value);
				free(back);
			}
			free(ht->array[i]->value);
			free(ht->array[i]);
		}
		else if (ht->array[i])
		{
			free(ht->array[i]->value);
			free(ht->array[i]);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
