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
ssize_t fle, rand, written;
char *buffer;

if (filename == NULL)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);

fle = open(filename, O_RDONLY);
rand = read(fle, buffer, letters);
written = write(STDOUT_FILENO, buffer, rand);

if (fle == -1 || rand == -1 || written == -1 || written != rand)
{
free(buffer);
return (0);
}

free(buffer);
close(fle);

return (written);
}
