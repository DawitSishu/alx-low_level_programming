#include "main.h"
/**
* _strpbrk - locates the first occurrence in the string s of
* any of the bytes in the string accept Returns a pointer to
* the byte in s that matches one of the bytes in accept, or NULL if not found
* @accept: pointer to acceptable characters;
* @s: pointer of the sring
*
* Return: final string
*/
char *_strpbrk(char *s, char *accept)
{
unsigned int i, sj;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (s + i);
}
}
}
return ('\0');
}
