#include "hash_tables.h"

/**
* hash_djb2 - generates a random nmber
* @str: string
*
* Return: hash
*/
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hashed;
int c;

hashed = 5381;
while ((c = *str++))
{
hashed = ((hashed << 5) + hashed) +c;
}
return (hashed);
}