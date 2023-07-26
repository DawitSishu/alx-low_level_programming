#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @s: pointer to the sting
 *
 * Return: final string
 */
char *leet(char *s)
{
int i, j;
char s2[] = "aeotl";
char s3[] = "43071";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; s2[j] != '\0'; j++)
{
if (s[i] == s2[j] || s[i] == s2[j] - 32)
{
s[i] = s3[j];
break;
}
}
}
return (s);
}
