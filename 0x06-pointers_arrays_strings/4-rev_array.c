#include "main.h"
/**
 * reverse_array - reverse a given array
 * @a: tpointer to the array
 * @n: length of the array
 *
 * Return: nohing
 */
void reverse_array(int *a, int n)
{
int i = 0, j;
n--;
while (n > i)
{
j = a[i];
a[i] = a[n];
a[n] = j;
i++;
n--;
}
}
