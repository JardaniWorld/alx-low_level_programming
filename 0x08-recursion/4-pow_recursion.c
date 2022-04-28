#include "main.h"

/**
 * _pow_recursion - This fuunction returns the value of
 * a number raised to the power of another number
 *
 * @x: an integer variable to be raised to a power
 * @y: The power with which x would be raised
 *
 * Return: Always 0. (Success)
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}

else if (y == 0)
{
return (1);
}

else
{
return (x * _pow_recursion(y - 1));
}

return (0);
}
