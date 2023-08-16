#include "3-calc.h"
/**
 * op_add - adds two intigers
 * @a: The frst intiger
 * @b: The second intiger
 *
 * Return: the sum of the intigers
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - subtracts two intigers
 * @a: The frst intiger
 * @b: The second intiger
 *
 * Return: the subtraction of the intigers
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - multiplies two intigers
 * @a: The frst intiger
 * @b: The second intiger
 *
 * Return: the multiplction of the intigers
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - divides two intigers
 * @a: The frst intiger
 * @b: The second intiger
 *
 * Return: the division of a by b
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - adds two intigers
 * @a: The frst intiger
 * @b: The second intiger
 *
 * Return: the remainders of the division a by b
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
