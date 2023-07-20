#include "main.h"
/**
 * print_triangle - prints a triangle # with length
 * @size : length of the triangle
 *
 * Return: nothing
 */
void print_triangle(int size)
{
int i, j, k;
if (size <= 0)
{
_putchar('\n');
return;
}
for (i = 0; i < size; i++)
{
for (j = i; j < size - 1; j++)
{
_putchar(' ');
}
for (k = 0; k <= i; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
