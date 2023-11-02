#include "hash_tables.h"

/**
* hash_table_add - adds an element to the hash table
* @key: not null key
* @new_value:  value of key
*
* Return: new node or NULL
*/

hash_node_t *hash_table_add(const char *key, char *new_value)
{
hash_node_t *added_node = NULL;
added_node = malloc(sizeof(hash_node_t));
if (!added_node)
{
free(new_value);
return (NULL);
}
added_node->key = strdup(key);
added_node->value = new_value;
if (!added_node->key || !added_node->value)
{
if (added_node->key)
free(added_node->key);
free(new_value);
return (NULL);
}
return (added_node);
}



/**
* hash_table_set - setter or adder of elt in hash table
* @ht: hash table
* @key: not null key
* @value: key value
*
* Return: success(1) or failure(0)
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int idx;
hash_node_t *added_node = NULL, *tmp = NULL;
char *val = NULL;
if (!ht || !key || !value || strlen(key) == 0)
return (0);
idx = key_idx((const unsigned char *)key, ht->size);
tmp = ht->array[idx];
val = strdup(value);
if (!val)
return (0);
while (tmp)
{
if (strcmp(tmp->key, key) == 0)
{
free(tmp->value);
tmp->value = val;
break;
}
tmp = tmp->next;
}
if (!tmp)
{
added_node = hash_table_add(key, val);
if (!added_node)
return (0);
added_node->next = ht->array[idx];
ht->array[idx] = added_node;
}
return (1);
}
