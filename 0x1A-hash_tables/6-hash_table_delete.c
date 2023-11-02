#include "hash_tables.h"

/**
* hash_table_delete - hash table deleteor
* @ht: hash table
*/

void hash_table_delete(hash_table_t *ht)
{
hash_node_t *temp = NULL;
unsigned long int idx = 0;

if (ht)
{
while (idx < ht->size)
{
while (ht->array[idx])
{
temp = ht->array[idx];
ht->array[idx] = ht->array[idx]->next;

if (temp->value)
free(temp->value);
if (temp->key)
free(temp->key);
free(temp);
}
free(ht->array[idx]);
idx++;
}
free(ht->array);
free((void *)ht);
}
}
