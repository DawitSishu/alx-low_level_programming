#include "main.h"
/**
 * puts2 - prints multiples of 2 in a number
 * @str: pointer to the sting
 *
 * Return: nothing
 */
void puts2(char *str)
{
int i = 0, j = 0;
while (str[i] != '\0')
{
i++;
}
while (j < i)
{
if (j % 2 == 0)
{
_putchar(str[j]);
}
j++;
}
_putchar('\n');
}
