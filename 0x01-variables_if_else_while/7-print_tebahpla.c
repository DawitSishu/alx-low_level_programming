#include <stdio.h>
/**
 * main - Entery function
 *
 * Return: always 0 (Success)
 */
int main(void)
{
int alpha;
for (alpha = 'z'; alpha >= 'a'; alpha--)
{
putchar(alpha);
if (alpha == 'a')
{
putchar('\n');
}
}
return (0);
}
