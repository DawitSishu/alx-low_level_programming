#include <stdio.h>
/**
 * main - Entery function
 *
 * Return: always 0 (Success)
 */
int main(void)
{
int num;
for (num = '0'; num <= '9' ; num++)
{
putchar(num);
if (num == '9')
{
putchar('$');
}
else
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
