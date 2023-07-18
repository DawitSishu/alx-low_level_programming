#include <stdio.h>
/**
 * main - prints 50 fbonachi series
 *
 * Return: always 0 (Success)
 */
int main(void)
{
int i;
long num1 = 0, num2 = 1, sum = 0;
for (i = 0; i < 50; i++)
{
sum = num1 + num2;
printf("%ld", sum);
num1 = num2;
num2 = sum;
if (i != 49)
{
printf(", ");
}
}
printf("\n");
return (0);
}
