#include "main.h"
#include <stdio.h>

/**
 * get_bit - This function returns the value of a bit at
 * a given index
 * @n: A variable
 * @index: The bit index starting from 0.
 *
 * Return: The value of a bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
int bit;

if (index > 63)
	return (-1);

bit = (n >> index) & 1;

return (bit);
}
