#include "main.h"

/**
 * _strncpy - This function copies a string
 * @dest: one of the string parameters to be copied
 * @src: The second string parameter to be copied
 * @n: number of bytes to be allocated to src
 *
 * Return: returns a pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}

while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);

}
