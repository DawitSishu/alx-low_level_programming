#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concats two strings
 * @n: the number of bytes to concatenate
 * @s1: the first string
 * @s2: the second string
 *
 * Return: Null if failed or string of the concatenated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int n1 = 0, n2 = 0, i;
char *result;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[n1] != '\0')
{
n1++;
}
while (s2[n2] != '\0')
{
n2++;
}
if (n < n2)
{
n2 = n;
}
result = (char *) malloc((n1 + n2 + 1) * sizeof(char));
if (result == NULL)
{
return (NULL);
}
for (i = 0; i < n1; i++)
{
result[i] = s1[i];
}
for (i = 0; i <= n1; i++)
{
result[n1 + i] = s2[i];
}
result[n1 + n2] = '\0';
return (result);
}
