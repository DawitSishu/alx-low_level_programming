#include "hash_tables.h"

/**
* hash_table_create - function to create hashtable
* @size: array size
*
* Return: new hahtable or null
*/

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *new_hash = NULL;
unsigned long int idx = 0;
new_hash = malloc(sizeof(hash_table_t));
if (new_hash)
{
new_hash->size = size;
new_hash->array = malloc(sizeof(hash_node_t *) * size);
if (!new_hash->array)
{
free(new_hash);
return (NULL);
}
while (idx < size)
{
new_hash->array[idx] = NULL;
idx++;
}
}
return (new_hash);
}
