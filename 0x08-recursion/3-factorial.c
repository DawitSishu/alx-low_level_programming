#include "main.h"
/**
 * factorial - finds factorial of a number
 * @n: the given number
 *
 * Return: the number's factorial
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
