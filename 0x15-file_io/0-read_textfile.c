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
int fle, result;
char *size;

if (filename == NULL)
return (0);

fle = open(filename, O_RDONLY);

if (fle == -1)
return (0);

size = malloc(sizeof(char) * letters);
if (!size)
{
close(fle);
return (0);
}

result = read(fle, size, letters);
if (result == -1)
{
free(size);
close(fle);
return (0);
}

size[result] = '\0';

result = close(fle);
if (result != 0)
{
free(size);
return (0);
}

result = write(STDOUT_FILENO, size, result);
free(size);

if (result == -1 || (size_t)result != letters)
return (0);

return (result);
}
