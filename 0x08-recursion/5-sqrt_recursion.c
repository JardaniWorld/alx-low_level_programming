#include "main.h"

/**
 * _analysis- This function analyzes the base case conditions
 * for the square root function
 *
 * @i: an integer
 * @n: an integer
 *
 * Return: _analysis
 */

int _analysis(int i, int n)
{
if (n == 0 || n == 1)
{
return (n);
}
else if (i * i < n)
{
return (_analysis(i + 1, n));
return (-1);
}
else if (i * i == n)
{
return (i);
}

return (-1);
}

/**
 * _sqrt_recursion - This function calculates the natural square root
 * of a number
 *
 * @n: The number to be calculated
 *
 * Return: Always 0. (Success)
 */

int _sqrt_recursion(int n)
{
int i = 0;
if (i < 0)
{
return (-1);
}

else
{
return (_analysis(i, n));
}

return (0);
}
