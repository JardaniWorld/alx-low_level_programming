#include "main.h"

/**
 * _strncat - This function concatenates two strings
 * with a maximum space to be used by one of them
 *
 * @dest: one of the strings to be concatenated
 * @src: The second string to be concatenated
 * @n: maximum usable space allocated to src
 *
 * Return: Always 0. (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
int a, b;

a = 0;

while (dest[a])
{
a++;
}

b = 0;

while (b < n && src[b])
{
dest[a] = src[b];
a++;
b++;
}


dest[a + n + 1] = '\0';
return (dest);
}
