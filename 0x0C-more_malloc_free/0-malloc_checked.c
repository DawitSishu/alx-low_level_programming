#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: the size of  the memory to be assigned
 *
 * Return: void pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *p = malloc(b);
if (p == NULL)
{
exit(98);
}
return (p);
}
