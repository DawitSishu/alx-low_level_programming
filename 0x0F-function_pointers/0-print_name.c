#include "function_pointers.h"
/**
 * print_name - allows to print name
 * @name: The name to be prined.
 * @f: The function tat does the printing
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
f(name);
}
