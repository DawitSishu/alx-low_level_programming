#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies one sting to the other
 * @dest: finial pointer that holds the copied string
 * @src: the initial string to copy
 *
 * Return: finally copied string
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
i++;
}
while (i >= 0)
{
dest[i] = src[i];
i--;
}
return (dest);
}
