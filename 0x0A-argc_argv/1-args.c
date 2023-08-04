#include <stdio.h>
/**
* main - prints number of arguments
* @argv: array of command lines
* @argc: size of argv
* Return: 0
**/
int main(int argc, char **argv)
{
if (argv == NULL || argv != NULL)
{
printf("%d\n", argc - 1);
}
return (0);
}
