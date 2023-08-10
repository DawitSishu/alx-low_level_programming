#include "main.h"
#include <stdlib.h>
/**
 * array_range -  creates an array of integers.
 * @min: the starting number
 * @max: the final number
 *
 * Return: Null if failed or the created array
 */
int *array_range(int min, int max)
{
int size = max - min + 1, i = 0;
int *result;
if (min > max)
{
return (NULL);
}
result = (int *)malloc(size * sizeof(int));
if (result == NULL)
{
return (NULL);
}
while (i < size)
{
result[i] = min;
min++;
i++;
}
return (result);
}
