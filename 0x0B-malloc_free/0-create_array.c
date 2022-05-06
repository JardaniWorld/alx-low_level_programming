#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - This function creates an array of characters
 * @size: bytes to be allocated
 * @c: An array of characters
 *
 * Return: Always 0. (Success)
 */

char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i;

if (size == 0)
{
return (NULL);
}

p = malloc(sizeof(char) * size);

if (p == NULL)
{
return (NULL);
}

else
{

for (i = 0; i < size; i++)
{
p[i] = c;
}

}

return (p);
}
