#include "main.h"
/**
 * times_table - prints the number time table
 *
 * Return: nothing
 */
void times_table(void)
{
int i, j, multiple;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
multiple = i * j;
if (multiple >= 10)
{
if (j != 0)
{
_putchar(' ');
}
_putchar((multiple / 10) + '0');
_putchar((multiple % 10) + '0');
if (j != 9)
{
_putchar(',');
}
}
else
{
if (j != 0)
{
_putchar(' ');
_putchar(' ');
}
_putchar(multiple + '0');
if (j != 9)
{
_putchar(',');
}
}
}
_putchar('\n');
}
}
