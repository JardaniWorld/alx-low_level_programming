#include "main.h"
#include <stdio.h>

/**
 * swap_int - This function swaps the values of two integers
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 *
 * Return: nothing to return.
 */

void swap_int(int *a, int *b)
{
int c;
int d;

c = 25;
d = 45;

a = &c;
b = &d;

*a = 45;
*b = 25;

}
