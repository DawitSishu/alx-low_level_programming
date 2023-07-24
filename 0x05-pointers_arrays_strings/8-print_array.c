#include "main.h"
#include <stdio.h>
/**
 * print_array - printsthe contnts of array delimited by number
 * @a: pointer to the array
 * @n: the delimited number
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i + 1 != n)
{
printf(", ");
}
}
printf("\n");
}
