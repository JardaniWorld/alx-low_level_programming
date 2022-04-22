#include "main.h"

/**
 * _strcpy - This function copies the string pointed to by a pointer
 *
 * @src: pointer variable
 * @dest: buffer where the string would be copied to
 *
 * Return: returns the dest
 */

char *_strcpy(char *dest, char *src)
{
int i;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';

return (dest);
}
