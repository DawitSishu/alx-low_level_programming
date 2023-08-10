#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: the number mebers
 * @size: the size of the array
 *
 * Return: Null if failed or string of the concatenated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *result;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
result = malloc(nmemb * size);
if (result == NULL)
{
return (NULL);
}
for (i = 0; i < nmemb * size; i++)
{
*(result + i) = 0;
}
return (result);
}
