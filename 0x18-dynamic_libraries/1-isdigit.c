#include "main.h"
/**
 * _isdigit - checks wheather a character is a digit (0-9)
 * @c: the character to be checked
 *
 * Return: 0 on the character is not digit, 1 the character is  digit
 */
int _isdigit(int c)
{
if (c <= 57 &&  c >= 48)
{
return (1);
}
return (0);
}
