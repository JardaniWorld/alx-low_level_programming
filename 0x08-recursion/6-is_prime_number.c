#include "main.h"

/**
 * num_analysis - A recursive loop to determine prime factors
 * @num: an integer
 * @iterator: iterative variable
 *
 * Return: Always 0. (Succee)
 */

int num_analysis(int num, int iterator)
{

if (iterator == num - 1)
{
return (1);
}

else if (num % iterator == 0)
{
return (0);
}

if (num % iterator != 0)
{
return (num_analysis(num, iterator + 1));
}

return (0);
}

/**
 * is_prime_number - This function evaluates a prime number
 * @num: an integer variable
 *
 * Return: Always 0. (Success)
 */

int is_prime_number(int num)
{
int iterator;
iterator = 2;

if (num < 2)
{
return (0);
}

if (num == 2)
{
return (1);
}

return (num_analysis(num, iterator));

return (0);
}
