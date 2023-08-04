#include <stdio.h>
#include <stdlib.h>
/**
* main - adds all numbers passed as arguments
* @argv: array of command lines
* @argc: size of argv
* Return: 0 if successful 1 if unsuccessful(not a character found)
**/
int main(int argc, char **argv)
{
int i, result = 0, temp;
if (argc == 1)
{
printf("%d", 0);
return (0);
}
for (i = 1; i < argc; i++)
{
temp = atoi(argv[i]);
if (temp == 0)
{
printf("Error\n");
return (1);
}
result += temp;
}
printf("%d\n", result);
return (0);
}
