#include "hash_tables.h"

/**
* hash_table_print - hash table printer
* @ht: hash table
*/
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *temp = NULL;
unsigned long int idx = 0;
char *str = "";

if (ht)
{
printf("{");
while (idx < ht->size)
{
temp = ht->array[idx];

while (temp)
{
printf("%s", str);
str = ", ";

if (temp->key)
printf("'%s': '%s'", temp->key, temp->value);

temp = temp->next;
}
idx++;
}
printf("}\n");
}
}
