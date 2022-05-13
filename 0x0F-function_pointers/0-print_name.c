#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - This function prints a name
 * @name: A variable of type pointer to char
 * @f: A pointer to a function
 *
 * Return: nothing to return
 */

void print_name(char *name, void (*f)(char *))
{
if (!name || !f)
{
return;
}

f(name);
}
