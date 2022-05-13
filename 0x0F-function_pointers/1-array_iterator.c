#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - This function executes a function given
 * as a parameter on each element of array
 *
 * @array: The given array
 * @size: size in bytes of the array
 * @action: A pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (!array || !action)
	return;

for (i = 0; i < size; i++)
{
(*action)(array[i]);
}
}
