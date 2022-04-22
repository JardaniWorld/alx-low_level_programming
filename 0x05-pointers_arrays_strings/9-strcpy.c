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
int count = 0;

while (count >= 0)
{
*(dest + count) = *(src + count);

if (*(src + count) == '\0')
break;
count++;
}

return (dest);
}
