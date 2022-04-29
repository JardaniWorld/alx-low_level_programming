#include "main.h"

/**
 * _sqrt_recursion - This function returns the natural
 * square root of a number
 *
 * @n: Square root of number to be computed
 *
 * Return: Always 0. (Success)
 */

int _sqrt_recursion(int n)
{
int x;

if (!(n * n))
{
return (-1);
}

if (x < (n / 2))
{
if ((n % x) == 0)
{
return (_sqrt_recursion(x * x));
}
}

return (0);
}
