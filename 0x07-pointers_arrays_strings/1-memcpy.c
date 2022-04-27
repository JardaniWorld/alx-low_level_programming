#include "main.h"

/**
 * _memcpy - This function copies memory area
 * @dest: memory area to be copied into
 * @src: memory area to be copied from
 * @n: memory in bytes
 *
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
char a, b;
dest = &a;
src = &b;
for (i = 0; i < n; i++)
{
dest = src;
}

return (dest);
}
