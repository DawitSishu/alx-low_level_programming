#include "main.h"
/**
 * _isupper - checks wheather a character is uppercase
 * @c: the character to be checked
 *
 * Return: 0 on the character is not uppercase, 1 the character is  uppercase
 */
int _isupper(int c)
{
if (c <= 90 &&  c >= 65)
{
return (1);
}
return (0);
}
