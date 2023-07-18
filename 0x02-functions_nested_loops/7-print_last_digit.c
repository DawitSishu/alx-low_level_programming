#include "main.h"
/**
 * print_last_digit - prints and returns the last digit of a number
 * @n: the number to be cheacked
 *
 * Return: a positive number
 */
int print_last_digit(int n)
{
int num;
num = n % 10;
if (num < 0)
{
num *= -1;
}
_putchar(num + '0');
return (num);
}
