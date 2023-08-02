#include "main.h"
/**
* _square_root - finds squareroot of a number
* @n1: the first number
* @n2: the second number
*
* Return: the number's squre root
*/
int _square_root(int n1, int n2)
{
int num;
num = n2 * n2;
if (num == n1)
{
return (n2);
}
if (num > n1)
{
return (-1);
}
return (_square_root(n1, n2 + 1));
}

/**
 * _sqrt_recursion - finds natural square root of a given number
 * @n: the given number
 *
 * Return: the number's squre root
 */
int _sqrt_recursion(int n)
{
return (_square_root(n, 1));
}

