#include "main.h"

/**
 * create_file - This function creates a file
 *
 * @filename: The name of file to be created
 * @text_content: A NULL terminated string to write to the file
 *
 * Return: Always 0. (Success)
 */

int create_file(const char *filename, char *text_content)
{
int file, fwrite, i;

if (filename == NULL)
	return (-1);

if (text_content == NULL)
	text_content = "";

file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

if (file == -1)
	return (-1);

if (text_content != NULL)
{
for (i = 0; text_content[0]; i++)
	;

fwrite = write(file, text_content, i);

if (fwrite == -1)
	return (-1);

}

close(file);

return (1);
}
