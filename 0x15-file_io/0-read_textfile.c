#include "main.h"

/**
 * read_textfile - This function reads a textfile and prints it to
 * the POSIX standard output
 *
 * @filename: A pointer to the text contained in a file
 * @letters: The number of letters to be read and printed
 *
 * Return: The actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t file, fread, fwrite;
char *countsize;

countsize = malloc(sizeof(char) * letters);

if (countsize == NULL)
	return (0);
if (filename == NULL)
	return (0);

file = open(filename, O_RDONLY);

if (file == -1)
	return (0);

fread = read(file, countsize, letters);

if (fread == -1)
	return (0);

fwrite = write(1, countsize, fread);

if (fwrite == -1)
	return (0);

close(file);
free(countsize);

return (fwrite);
}
