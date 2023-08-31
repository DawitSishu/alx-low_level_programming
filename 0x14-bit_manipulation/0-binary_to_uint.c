#include "main.h"
#include <stdbool.h> 
bool is_really_binary(const char *b);

/**
* binary_to_uint - converts binary to base 10
* @b: The binary number to be converted
*
* Return: converted number or 0 on failure
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int final = 0, i = 0;

if (b == NULL || !is_really_binary(b))
{
return (0);
}

while (b[i] != '\0')
{
final <<= 1;
if (b[i] == '1')
{
final += 1;
}
i++;
}
return (final);
}

/**
* is_really_binary - checks if the number is really binary
* @b: The binary number to be checked
*
* Return: true if really binary else false
*/
bool is_really_binary(const char *b)
{
int i;

for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '1' && b[i] != '0')
{
return (false);
}
}
return (true);
}
