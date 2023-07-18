#include "main.h"
/**
 * print_sign - checks the number's sign (+,-,0) and prints it
 * @n: the number to be checked
 *
 * Return:0 - n is 0, 1 - n is postive , -1 - n is negative
 */
int print_sign(int n)
{
if (n == 0)
{
_putchar('0');
return (0);
}
else if (n > 0)
{
_putchar('+');
return (1);
}
else
{
_putchar('-');
return (-1);
}
}
