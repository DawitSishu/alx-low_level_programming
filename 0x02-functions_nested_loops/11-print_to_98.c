#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints the numbers upto 98
 * @n: the number in which the couning begins
 *
 * Return: nothing
 */
void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
{
printf("%d, ", n);
n--;
}
}
else
{
while (n <= 98)
{
printf("%d, ", n);
n++;
}
}
printf("98\n");
}
