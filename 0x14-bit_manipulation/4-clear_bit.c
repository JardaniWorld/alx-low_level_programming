#include "main.h"
#include <stdio.h>

/**
 * clear_bit - This function sets the value of a bit to
 * 0 at a given index
 * @n: A pointer variable
 * @index: Index of the bit starting from 0.
 *
 * Return: Always 0. (Success)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
*n = *n & ~(1 << index);

return ((index > 8 * sizeof(*n)) ? -1 : 1);
}
