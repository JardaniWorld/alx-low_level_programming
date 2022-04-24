#include "main.h"

/**
 * reverse_array - This function reverses the contents
 * of an array of integers
 *
 * @a: The given array
 * @n: The number of elements in the array
 *
 * Return: Always 0. (Success)
 */

void reverse_array(int *a, int n)
{
int i, j, tmp;

j = n - 1;

for (i = 0; i < n / 2; i++)
{
tmp = a[i];
a[i] = a[j];
a[j] = tmp;
j--;
}

}
