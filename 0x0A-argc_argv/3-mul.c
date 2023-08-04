#include <stdio.h>
#include <stdlib.h>
/**
* main - multiplies 2 number arguments
* @argv: array of command lines
* @argc: size of argv
* Return: 0 if successful 1 if unsuccessful(not 3 arguments)
**/
int main(int argc, char **argv)
{
int result;
if (argc != 3)
{
printf("Error\n");
return (1);
}
result = (atoi(argv[1]) * atoi(argv[2]));
printf("%d\n", result);
return (0);
}
