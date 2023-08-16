#include "function_pointers.h"
/**
 * int_index -finds an element in an array
 * @array: The actual array.
 * @size: The size of the array.
 * @cmp: the function to execute on he elements
 *
 * Return: -1 on failure and the index if  element found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
return (-1);
}
