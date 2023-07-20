#include "main.h"
/**
 * print_number - prints a number
 * @n : the number to be printed
 *
 * Return: nothing
 */
void print_number(int n)
{
unsigned int i = n;
if (n < 0)
{
_putchar('-');
i = -1 * i;
}
if (i > 9)
{
print_number(i / 10);
}
_putchar((i % 10) + '0');
}
