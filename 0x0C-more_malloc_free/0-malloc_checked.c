#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - This function allocates memory using malloc
 * @b: A variable
 *
 * Return: A pointer to the allocated space
 */

void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);

if (ptr == NULL)
{
exit(98);
}

return (ptr);
}
