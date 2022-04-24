#include "main.h"

/**
 * _strncpy - This function copies a string
 * @dest: one of the string parameters to be copied
 * @src: The second string parameter to be copied
 *
 * Return: returns a pointer
 */

char *_strcpy(char *dest, char *src, int n)
{
int i = 0;

while (*(src + i) != '\0' && i < n)
{
*(dest + i) = *(src + i);
i++;
}

while (i < n)
{
*(dest + i) = '\0';
i++;
}

return (dest);

}
