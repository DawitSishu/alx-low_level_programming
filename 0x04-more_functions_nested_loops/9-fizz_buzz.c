#include <stdio.h>
/**
 * main - prints 1-100 and fizz and buzz or fizzbuzz
 *
 * Return: always 0 (Success)
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", i);
}
printf(" ");
}
printf("\n");
return (0);
}
