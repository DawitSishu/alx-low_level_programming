#include "main.h"
/**
 * _puts - prints a given sring to the console
 * @str: pointer to the sting
 *
 * Return: nothing
 */
void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
