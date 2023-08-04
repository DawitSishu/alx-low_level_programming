#include "main.h"
/**
 * _strlen - finds the length of a given string
 * @s: pointer to the character array(string)
 *
 * Return: length of the sting
 */
int _strlen(char *s)
{
int len = 0;
while (s[len] != '\0')
{
len++;
}
return (len);
}
