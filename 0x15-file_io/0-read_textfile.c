#include "main.h"

/**
* read_textfile - a function that reads a text file
* @filename: the file name
* @letters: the number of letters
*
* Return:  number of letters or 0 if fails
**/

ssize_t read_textfile(const char *filename, size_t letters)
{
int fle, len, i, result;
char *size;

if (filename == NULL)
return (0);
fle = open(filename, O_RDONLY);

if (fle == -1)
{
close(fle);
return (0);
}

size = malloc(sizeof(char) * letters);
if (!size)
return (0);

read(fle, size, letters);

size[letters] = '\0';

for (i = 0; size[i] != '\0'; i += 1)
len += 1;

result = close(fle);
if (result != 0)
exit(-1);
result = write(STDOUT_FILENO, size, len);
if (result != len)
return (0);
free(size);

return (len);
}
