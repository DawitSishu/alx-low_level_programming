#include <stdio.h>
/**
 * main - Entery function
 *
 * Return: always 0 (Success)
 */
int main(void)
{
int alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
putchar(alpha);
if (alpha == 'z')
{
putchar('\n');
}
}
return (0);
}
