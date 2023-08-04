#include "main.h"
/**
 * _strcmp - works the same as strcmp
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: difference intiger
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
i = s1[i] - s2[i];
return (i);
}
i++;
}
return (0);
}
