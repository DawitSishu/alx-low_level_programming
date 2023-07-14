#include <stdio.h>
/**
 * main - Entery function
 *
 * Return: always 0 (Success)
 */
int main(void)
{
int alpha;
for (alpha = '0'; alpha <= '9' ; alpha++)
{
putchar(alpha);
}
for (alpha = 'a'; alpha <= 'f'; alpha++)
{
putchar(alpha);
if (alpha == 'f')
{
putchar('\n');
}
}
return (0);
}
