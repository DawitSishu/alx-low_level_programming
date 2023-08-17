#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints given numbers by a separator
 * @n: number of arguments
 * @separator: separator betwwen the numbers
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list numbers;
va_start(numbers, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(numbers, int));
if (separator == NULL)
{
printf("(nil)");
continue;
}
if (separator != NULL && (i + 1 != n))
printf("%s", separator);
}
printf("\n");
va_end(numbers);
}
