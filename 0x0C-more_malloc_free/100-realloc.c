#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - This function reallocates memory using malloc and free
 * @ptr: A pointer variable
 * @old_size: size in bytes allocated for ptr
 * @new_size: size in bytes for the new memory block
 *
 * Return: A pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *s;

if (new_size > old_size)
{
s = malloc(new_size);
free(ptr);
return (s);
}
if (new_size == old_size)
{
return (ptr);
}
if (ptr == NULL)
{
s = malloc(new_size);
free(ptr);
return (s);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
return (ptr);
}
