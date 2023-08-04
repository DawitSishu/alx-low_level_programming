#include "main.h"
/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @src: pointer to the initial string
 * @dest: pointer of final sring
 * @n: the length to which the character is appended
 *
 * Return: final string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
