#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - This function creates an array of integers
 * @min: A variable
 * @max: A variable
 *
 * Return: A pointer to the newly created array
 */

int *array_range(int min, int max)
{
int *arr, i = 0, t = min;

if (min > max)
{
return (0);
}

arr = malloc((max - min + 1) * sizeof(int));

if (!arr)
{
return (0);
}

while (i <= max - min)
{
arr[i++] = t++;
}

return (arr);
}
