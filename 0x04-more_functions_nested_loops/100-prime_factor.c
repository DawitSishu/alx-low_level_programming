#include <stdio.h>
/**
 * main - prints largest prime number of 612852475143
 *
 * Return: always 0 (Success)
 */
int main(void)
{
long num = 612852475143;
long prime = 2;
while (num >= 1)
{
if (num == 1)
{
printf("%ld\n", prime);
break;
}

if (num % prime == 0)
{
num /= prime;
continue;
}

prime++;
}

return (0);
}
