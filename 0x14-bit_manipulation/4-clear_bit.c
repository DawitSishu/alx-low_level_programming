#include "main.h"
/**
* clear_bit -  sets the value of a bit to 0.
* @n: the original number
* @index:  is the index, starting from 0
*
* Return: 1 if it worked else -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= 64)
{
return (-1);
}
*n &= ~(1 << index);
return (1);
}
