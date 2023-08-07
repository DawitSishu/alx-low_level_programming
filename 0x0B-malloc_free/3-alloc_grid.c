#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a two dimensional array
 * @width: width of the array
 * @height: length of the array
 *
 * Return: NULL if malloc fails or pointer to the array
 */
int **alloc_grid(int width, int height)
{
int **final_array, i, j;
if (width <= 0 || height <= 0)
{
return (NULL);
}
final_array = (int **) malloc(height * sizeof(int *));
if (final_array == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
final_array[i] = (int *) malloc(width * sizeof(int));
if (final_array[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(final_array[j]);
}
free(final_array);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
final_array[i][j] = 0;
}
}
return (final_array);
}
