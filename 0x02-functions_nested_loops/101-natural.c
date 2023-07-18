#include "main.h"
#include <stdio.h>
/**
 * add - prinsts multiple of 3 and f belo 1024
 *
 * Return: nothing
 */
void natural_num_sum(void)
{
int i, sum = 0;
for (i = 1; i < 1024; i++)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
sum += i;
} 
}
printf("%d\n", sum);
}
