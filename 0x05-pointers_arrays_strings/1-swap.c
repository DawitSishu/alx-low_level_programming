#include "main.h"
/**
 * swap_int - swaps the value of two intigers
 * @a: pointer 1
 * @b: pointer 2
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
int i;
i = *a;
*a = *b;
*b = i;
}
