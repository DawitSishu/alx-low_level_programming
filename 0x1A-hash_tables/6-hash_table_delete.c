#include "hash_tables.h"

/**
* hash_table_delete - hash table deleteor
* @ht: hash table
*/

void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *temp;
hash_node_t *another;

if (ht == NULL)
{
return;
}
for (i = 0; i < ht->size; i++)
{
temp = ht->array[i];
while ((another = temp) != NULL)
{
temp = temp->next;
free(another->key);
free(another->value);
free(another);
}
}
free(ht->array);
free(ht);
}
