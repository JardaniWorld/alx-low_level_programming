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
int a;
int i;
int *ptr;

s = &n;

for (i = 0; i <= &n; i++)
{
*s = b;
b++;
}

ptr = &s;

return (ptr);
}
