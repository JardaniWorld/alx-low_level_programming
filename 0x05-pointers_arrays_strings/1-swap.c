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

c = 98;
d = 42;

printf("a = %d, \n", c);
printf("b = %d, \n", d);

a = &c;
b = &d;

*a = 42;
*b = 98;

}
