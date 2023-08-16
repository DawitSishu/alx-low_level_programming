#include "function_pointers.h"
/**
 * array_iterator - executes a function on every element of an array
 * @array: The actual array.
 * @size: The size of the array.
 * @action: the function to be executed on every element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || size == NULL || action == NULL)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
