#include "main.h"
/**
* flip_bits - returns number of bits nedded to filp to
* get from one number to another number
* @n: the  first number
* @m:  the second number
*
* Return: number of bit needed
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int needed_bits = 0, i;
i = n ^ m;
needed_bits = 0;

while (i != 0)
{
i &= (i - 1);
needed_bits++;
}

return (needed_bits);
}
