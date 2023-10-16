#include "main.h"
/**
 * _isalpha - checks wheather a character is letter,lowercase or uppercase
 * @c: the character to be checked
 *
 * Return:0-the character is not alpha-numeric,1-the character is alpha-numeric
 */
int _isalpha(int c)
{
if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
{
return (1);
}
else
{
return (0);
}
}
