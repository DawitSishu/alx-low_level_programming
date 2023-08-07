#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatinates two strings
 * @s1: the firs string
 * @s2: the seconf string
 *
 * Return: NULL if malloc fails or pointer to the concatinated string
 */
char *str_concat(char *s1, char *s2)
{
char *final_string;
int i, len1 = 0, len2 = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[len1] != '\0')
{
len1++;
}
while (s2[len2] != '\0')
{
len2++;
}
final_string = malloc((len2 + len1 + 1) * sizeof(char));
if (final_string == NULL)
{
return (NULL);
}
for (i = 0; i < len1; i++)
{
final_string[i] = s1[i];
}
for (i = 0; i < len2; i++)
{
final_string[len1 + i] = s2[i];
}
final_string[len1 + len2] = '\0';

return (final_string);
}
