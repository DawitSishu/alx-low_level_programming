#include "main.h"
/**
* _strspn - Returns the number of bytes in the initial
* segment of s which consist only of bytes from accept
* @accept: pointer to acceptable characters;
* @s: pointer of the sring
*
* Return: final string
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int len = 0;
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
len++;
break;
}
}
if (accept[j] == '\0')
{
return (len);
}
}
return (len);
}
