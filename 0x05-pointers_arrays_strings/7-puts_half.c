#include "main.h"
/**
 * puts_half - prints second half of the string
 * @str: pointer to the string
 *
 * Return: nothing
 */
void puts_half(char *str)
{
int i = 0, j, k;
while (str[i] != '\0')
{
i++;
}
i--;
if (i % 2 == 0)
{
j = i / 2;
k = i - j + 1;
}
else
{
j = (i - 1) / 2;
k = i - j;
}
while (k <= i)
{
_putchar(str[k]);
k++;
}
_putchar('\n');
}
