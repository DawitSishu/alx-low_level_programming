#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copies a string and returns a pointer to it
 * @str: the initial array
 *
 * Return: NULL if malloc fails or pointer to the array
 */
char *_strdup(char *str)
{
int i, size = 0;
char *final_string;
if (str == NULL)
{
return (NULL);
}
while (str[size] != '\0')
{
size++;
}
final_string = (char *)malloc((size + 1) *sizeof(char));
if (final_string == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
final_string[i] = str[i];
}
return (final_string);
}
