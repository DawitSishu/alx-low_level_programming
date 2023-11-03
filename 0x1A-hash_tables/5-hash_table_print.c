#include "hash_tables.h"

/**
* hash_table_print - hash table printer
* @ht: hash table
*/
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
hash_node_t *temp;
char *str;

if (ht == NULL)
return;

printf("{");
str = "";

for (i = 0; i < ht->size; i++)
{
temp = ht->array[i];
while (temp != NULL)
{
printf("%s'%s': '%s'", str, temp->key, temp->value);
str = ", ";
temp = temp->next;
}
}
printf("}\n");
}
