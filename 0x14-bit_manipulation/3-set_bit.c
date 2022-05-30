#include "main.h"
#include <stdio.h>

/**
 * set_bit - This function sets the value of a bit
 * to 1 at a given index
 * @n: A pointer variable
 * @index: Index of the bit starting from 0.
 *
 * Return: Always 0. (Success)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index > (8 * sizeof(*n)) - 1)
	return (-1);

*n = *n | (1 << index);
return (1);
}
