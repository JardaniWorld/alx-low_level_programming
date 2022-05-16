#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - This function calculates the sum of its parameters
 * @n: The number of parameters
 *
 * Return: Always 0. (Success)
 */

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
int i;
int sum;

va_start(ap, n);

sum = 0;
if (n == 0)
{
return (0);
}

for (i = 0; i < n; i++)
{
sum += va_arg(ap, unsigned int);
}

va_end(ap);

return (sum);
}
