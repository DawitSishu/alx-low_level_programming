#include "main.h"
/**
* get_bit - returns the value of a bit at a given index.
* @n: the original number
* @index:  is the index, starting from 0
*
* Return: value of bit or -1 on error
*/
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= 64)
{
return (-1);
}
if ((n & (1 << index)))
{
return (1);
}
else
{
return (0);
}
}
