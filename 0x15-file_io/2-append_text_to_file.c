#include "main.h"

/**
 * append_text_to_file - This function appends text at the end of a file
 *
 * @filename: The name of the file
 * @text_content: A NULL terminated string to be added at the end of a file
 *
 * Return: Always 0. (Success)
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd, fwrite, i;

if (filename == NULL)
	return (-1);

fd = open(filename, O_APPEND | O_RDWR, 0664);

if (fd == -1)
	return (-1);

if (text_content != NULL)
{
for (i = 0; text_content[i]; i++)
	;

fwrite = write(fd, text_content, i);

if (fwrite == -1)
	return (-1);
}

close(fd);
return (1);
}
