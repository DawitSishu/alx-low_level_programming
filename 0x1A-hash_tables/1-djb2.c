#include "hash_tables.h"

/**
* hash_djb2 - djb2 algorith imolemnter
* @str: string for hash table
*
* Return: hash
*/

unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash_val;
int chs
hash_val = 5381;
while ((chs = *str++))
{
hash_val = ((hash_val << 5) + hash_val) +chs;
}
return (hash_val);
}
