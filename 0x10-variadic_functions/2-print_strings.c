#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints given strings by a separator
 * @n: number of arguments
 * @separator: separator betwwen the strings
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list numbers;
va_start(numbers, n);
for (i = 0; i < n; i++)
{
str = va_arg(numbers, char*);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if (separator != NULL && (i + 1 != n))
printf("%s", separator);
}
printf("\n");
va_end(numbers);
}
