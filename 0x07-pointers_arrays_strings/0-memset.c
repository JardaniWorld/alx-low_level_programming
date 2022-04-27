#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte
 * @s: A pointer to a memory location
 * @b: A constant byte to fill out the memory
 * @n: bytes of memory to be filled
 *
 * Return: A pointer to memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
char i;
int **ptr;

ptr = &s;

for (i = 0; i <= &n; i++)
{
&s = b;
b++;
}
*ptr = n;

return (ptr);
}
