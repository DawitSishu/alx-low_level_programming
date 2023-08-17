#include <stdio.h>
#include "variadic_functions.h"
/**
* printStrings -  print a string
* @args: the va_list argument to be printed
*/
void printStrings(va_list args)
{
char *str;
str = va_arg(args, char *);
if (str == NULL)
{
printf("(nil)");
return;
}
printf("%s", str);
}

/**
* printFloats - print a float
* @args: the va_list argument to be printed
*/
void printFloats(va_list args)
{
printf("%f", va_arg(args, double));
}

/**
* printCharacters - print a character
* @args: the va_list argument to be printed
*/
void printCharacters(va_list args)
{
printf("%c", va_arg(args, int));
}

/**
* printIntegers - print an integer
* @args: the va_list argument to be printed
*/
void printIntegers(va_list args)
{
printf("%d", va_arg(args, int));
}

/**
* print_all - prints given arguments based on format
* @format: format string to be produced
*/
void print_all(const char * const format, ...)
{
unsigned int i = 0, j;
char *separator = "";
identifier lists[] = {
{'c', printCharacters},
{'i', printIntegers},
{'f', printFloats},
{'s', printStrings},
};
va_list arguments;
va_start(arguments, format);
i = 0;
while (format && format[i] != '\0')
{
j = 0;
while (j < 5)
{
if (lists[j].character == format[i])
{
printf("%s", separator);
lists[j].f(arguments);
separator = ", ";
break;
}
j++;
}
i++;
}
va_end(arguments);
printf("\n");
}
