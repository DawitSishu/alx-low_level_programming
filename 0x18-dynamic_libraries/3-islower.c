#include "main.h"
/**
 * _islower - checks wheathera character is lowercase
 * @c: the character to be checked
 *
 * Return: 0 on the character is not lower-case, 1 the character is  lowercase
 */
int _islower(int c)
{
if (c <= 122 && c >= 97)
{
return (1);
}
else
{
return (0);
}
}
