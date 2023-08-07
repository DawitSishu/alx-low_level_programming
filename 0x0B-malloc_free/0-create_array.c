#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates and initializes an array of chars
 * @size: size of the array
 * @c: the character to be initialized with
 *
 * Return: NULL if size = 0 or pointer to the array
 */
char *create_array(unsigned int size, char c)
{
char *final_array;
unsigned int i;
if (size <= 0)
{
return (NULL);
}
final_array = (char *)malloc(size * sizeof(char));
if (final_array == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
final_array[i] = c;
}
return (final_array);
}
