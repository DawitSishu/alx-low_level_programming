#include "main.h"
/**
 * _strncpy - works the same as strncpy
 * @dest: pointer to the final string
 * @src: pointer to the initial string
 * @n: number of bytes
 *
 * Return: destinaion string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
if (i >= n)
{
break;
}
dest[i] = src[i];
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
