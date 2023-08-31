#include "main.h"
/**
* get_endianness -  checks the endianness.
*
* Return: number of bit needed
*/
int get_endianness(void)
{
int i = 2;

if (i & 1)
{
return (0);
}
else
{
return (1);
}
}
