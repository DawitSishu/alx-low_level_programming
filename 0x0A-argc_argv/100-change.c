#include <stdio.h>
#include <stdlib.h>
/**
* main - gets cents and retiurns the change of cents
* @argv: array of command lines
* @argc: size of argv
* Return: 0 if successful 1 if unsuccessful(more or less than 1 argument)
**/
int main(int argc, char **argv)
{
int i = atoi(argv[1]), count = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
while (i > 0)
{
if (i >= 25)
{
i -= 25;
count += 1;
continue;
}
else if (i >= 10)
{
i -= 10;
count += 1;
continue;
}
else if (i >= 5)
{
i -= 5;
count += 1;
continue;
}
else if (i >= 2)
{
i -= 2;
count += 1;
continue;
}
i -= 1;
count += 1;
}
printf("%d\n", count);
return (0);
}
