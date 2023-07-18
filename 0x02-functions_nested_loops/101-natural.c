#include <stdio.h>
/**
 * main - prinsts multiple of 3 and f belo 1024
 *
 * Return: 0 (success)
 */
int main(void)
{
int i, sum = 0;
for (i = 1; i < 1024; i++)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
sum += i;
}
}
printf("%d\n", sum);
return (0);
}
