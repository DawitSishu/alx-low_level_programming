#include "hash_tables.h"

/**
* key_index - returns index of key
* @key: key
* @size: array size
*
* Return: index of key - value pair
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
