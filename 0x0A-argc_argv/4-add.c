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
int i, j, temp2, result = 0, temp;
char chk[2];
if (argc == 1)
{
printf("%d", 0);
return (0);
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
chk[0] = argv[i][j];
chk[1] = '\0';
temp2 = atoi(chk);
if (temp2 == 0)
{
printf("Error\n");
return (1);
}
}
temp = atoi(argv[i]);

result += temp;
}
printf("%d\n", result);
return (0);
}
