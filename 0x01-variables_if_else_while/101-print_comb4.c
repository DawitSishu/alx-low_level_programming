#include <stdio.h>
/**
 * main - Entery function
 *
 * Return: always 0 (Success)
 */
int main(void)
{
int num, num2, num3;
for (num3 = 0; num3 <= 9; num3++)
{
for (num = num3 + 1; num <= 9; num++)
{
for (num2 = num + 1; num2 <= 9; num2++)
{
putchar(num3 + '0');
putchar(num + '0');
putchar(num2 + '0');
if (num3 == 7)
{
continue;
}
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
