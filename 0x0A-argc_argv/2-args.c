#include <stdio.h>
/**
* main - prints all given arguments
* @argv: array of command lines
* @argc: size of argv
* Return: 0
**/
int main(int argc, char **argv)
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
