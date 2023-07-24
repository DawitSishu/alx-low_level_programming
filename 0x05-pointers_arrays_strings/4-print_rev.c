#include "main.h"
/**
 * print_rev - prints a given sring to the console in reverse
 * @s: pointer to the sting
 *
 * Return: nothing
 */
void print_rev(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
while (--i >= 0)
{
_putchar(s[i]);
}
_putchar('\n');
}
