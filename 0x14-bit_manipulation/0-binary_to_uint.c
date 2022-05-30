#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - This function converts a binary number
 * to unsigned int
 * @b: A string of characters variable
 *
 * Return: The converted number
 */

unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int con_value = 0;

if (!b)
	return (0);

for (i = 0; b[i]; i++)
{
if (b[i] != '0' && b[i] != '1')
	return (0);

con_value = 2 * con_value + (b[i] - '0');
}

return (con_value);
}
