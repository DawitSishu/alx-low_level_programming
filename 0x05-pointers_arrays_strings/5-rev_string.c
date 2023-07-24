#include "main.h"
/**
 * rev_string - reverses a given string
 * @s: pointer to the sting
 *
 * Return: nothing
 */
void rev_string(char *s)
{
int i = 0, j = 0;
char x;
while (s[i] != '\0')
{
i++;
}
i--;
while (j < i)
{
x = s[i];
s[i] = s[j];
s[j] = x;
i--;
j++;
}
}
