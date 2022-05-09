#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - This function allocates memory for an
 * array using malloc
 *
 * @nmemb: Number of elements
 * @size: bytes to be allocated
 *
 * Return: A pointer to the allocated space
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i;

if (nmemb == 0 || size == 0)
{
return (NULL);
}

ptr = malloc(nmemb * size);

if (ptr == NULL)
{
return (NULL);
}

for (i = 0; i < nmemb * size; i++)
{
ptr[i] = 0;
}

return (ptr);
}
