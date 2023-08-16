#include "3-calc.h"
/**
* main - calculates the numberswith operatiors
* @argv: array of command lines
* @argc: size of argv
* Return: 0 (success), 98,99,100 (failure/some error)
**/
int main(int argc, char **argv)
{
int num1;
int num2;
int (*operation)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}
operation = get_op_func(argv[2]);
if (operation == NULL)
{
printf("Error\n");
exit(99);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
printf("%d\n", operation(num1, num2));
return (0);
}
