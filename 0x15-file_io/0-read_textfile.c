#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fle, readedfile, written;
char *stored_file;

if (!filename)
{
return (0);
}
fle = open(filename, O_RDONLY);
if (file == -1)
{
return (0);
}
stored_file = malloc(sizeof(char) * letters + 1);
readedfile = read(fle, stored_file, letters);
stored_file[letters] = '\0';

written = write(STDOUT_FILENO, stored_file, readedfile);
if (written == -1)
{
return (0);
}
free(stored_file);
close(fle);

return (written);
}
