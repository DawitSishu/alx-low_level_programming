#include "main.h"
/**
 * _strcat -  appends the src string to the dest string, overwriting the
 * terminating null byte (\0) at the end of des
 * @dest: pointer to the final string
 * @src: pointer to the initial string
 *
 * Return: nothing
 */
char *_strcat(char *dest, char *src)
{
int i, length = 0;
while (dest[length] != '\0')
{
length++;
}
for (i = 0; src[i] != '\0'; i++)
{
dest[length] = src[i];
length++;
}
return (dest);
}
