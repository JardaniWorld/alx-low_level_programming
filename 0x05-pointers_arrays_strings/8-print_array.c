#include "main.h"
#include <stdio.h>

/**
 * print_array - This function prints out n elements
 * of an array of integers
 *
 * @a: pointer to the array
 * @n: the elements of the array to be printed
 */

void print_array(int *a, int n)
{
int i;

i = 0;

while (i < n)
{
printf("%d", a[i]);

if (i < n - 1)
{
printf(", ");
}

i++;
}
printf('\n');
}
