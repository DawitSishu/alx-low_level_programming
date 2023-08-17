#ifndef VARIADIC_H
#define VARIADIC_H
#include  <stdarg.h>
/**
 * struct characterIdentifier - represents caracter and its handler funcion
 * @character: The name of the dog.
 * @f: The age of the dog.
 */
struct characterIdentifier
{
char character;
void (*f)(va_list);
};
typedef struct characterIdentifier identifier;
int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
