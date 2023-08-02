#include "main.h"
/**
* _is_prime - finds if the number is prime or not
* @n1: the first number
* @n2: the second number
*
* Return: 0-if prime 1-if not prime
*/
int _is_prime(int n1, int n2)
{
if (n1 == n2)
{
return (1);
}
if (n1 % n2 == 0)
{
return (0);
}
return (_is_prime(n1, n2 + 1));
}

/**
 * is_prime_number - finds if number is prime or not
 * @n: the given number
 *
 * Return: 0 or 1 dependig if the number is prime or not
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (_is_prime(n, 2));
}

