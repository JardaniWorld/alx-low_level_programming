#include "function_pointers.h"

/**
 * int_index - This function searches for an integer
 * @array: The array argument
 * @size: number of elements of elements in the array
 * @cmp: A pointer
 *
 * Return: Always 0. (Success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
}

return (-1);
}
