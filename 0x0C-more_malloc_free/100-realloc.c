#include "main.h"
#include <stdlib.h>
/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: the original pointer
 * @old_size: the old size of the memory block
 * @new_size: the new size of the memory block
 *
 * Return: Null if failed or pointer to memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
unsigned int i;
if (old_size == new_size)
{
return (ptr);
}
if (ptr != NULL && new_size == 0)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
return (malloc(new_size));
}
new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
return (NULL);
}
if (old_size < new_size)
{
new_size = old_size;
}
for (i = 0; i < new_size; i++)
{
*((char *)new_ptr + i) = *((char *)ptr + i);
}
free(ptr);
return (new_ptr);
}
