#include "hash_tables.h"

/**
 * add_n_hash - add node at the begning
 * @head: head of list
 * @key: key
 * @value: stored val
 *
 * Return: hash head
 */
hash_node_t *add_n_hash(hash_node_t **head, const char *key, const char *value)
{
hash_node_t *temp;
temp = *head;
while (temp != NULL)
{
if (strcmp(key, temp->key) == 0)
{
free(temp->value);
temp->value = strdup(value);
return (*head);
}
temp = temp->next;
}

temp = malloc(sizeof(hash_node_t));

if (temp == NULL)
return (NULL);

temp->key = strdup(key);
temp->value = strdup(value);
temp->next = *head;
*head = temp;

return (*head);
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

if (ht == NULL)
{
return (0);
}
if (key == NULL || *key == '\0')
{
return (0);
}
idx = key_index((unsigned char *)key, ht->size);
if (add_n_hash(&(ht->array[idx]), key, value) == NULL)
{
return (0);
}
return (1);
}
