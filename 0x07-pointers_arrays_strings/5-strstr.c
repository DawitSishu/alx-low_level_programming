#include "main.h"
/**
* _strstr - function finds the first occurrence of the
* substring needle in the string haystack
* @haystack: pointer to main string
* @needle: pointer of the accepted string
*
* Return: final string
*/
char *_strstr(char *haystack, char *needle)
{
int i, j;
for (i = 0; haystack[i] != '\0'; i++)
{
if (haystack[i] == needle[0])
{
for (j = 1; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
{
break;
}
}
if (needle[j] == '\0')
{
return (haystack + i);
}
}
}
return (0);
}
