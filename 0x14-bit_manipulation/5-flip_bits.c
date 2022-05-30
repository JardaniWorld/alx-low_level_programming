#include "main.h"
#include <stdio.h>

/**
 * flip_bits - This function returns the number of bits that
 * needs to be flipped to get from one number to another
 *
 * @n: A variable
 * @m: A variable
 *
 * Return: Number of bits to be manipulated
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i;
int count = 0;

for (i = 8 * sizeof(n) - 1; i >= 0; i--)
	if (((n ^ m) >> i) & 1)
		count++;

return (count);
}
