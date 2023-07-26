#include "main.h"
/**
 * _strncat -  appends the src string to the dest string, it'l use at most
 * n bytes from src; and src does not need to be null-terminated
 * if it contains n or more bytes
 * @dest: pointer to the final string
 * @src: pointer to the initial string
 * @n: number of bytes
 *
 * Return: destinaion string
 */
char *_strncat(char *dest, char *src, int n)
{
int i, length = n;
while (dest[length] != '\0')
{
length++;
}
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[length] = src[i];
length++;
}
dest[length] = '\0';
return (dest);
}
