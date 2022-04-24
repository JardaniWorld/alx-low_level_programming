#include "main.h"

/**
 * _strcat - This function concatenates two string
 *
 * @dest: one of the strings to be concatenated
 * @src: The second string to be concatenated
 *
 * Return: Always 0. (Success)
 */

char *_strcat(char *dest, char *src)
{
int a, b;

a = 0;

while (dest[a] != '\0')
{
a++;
}

b = 0;

while (src[b] != '\0')
{
dest[a] = src[b];
b++;
a++;
}

dest[a] = '\0';

return (dest);

}
