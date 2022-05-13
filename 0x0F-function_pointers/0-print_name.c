#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - This function prints a name
 * @name: A variable of type pointer to char
 * @f: A pointer to a function
 *
 * Return: nothing to return
 */

void print_name(char *name, void (*f)(char *))
{
_putchar(*name);
}

/**
 * main - Entry point
 *
 * Return: Always 0. (Success)
 */

int main(void)
{
void (*f)(char *) = print_name;
print_name(name);

return (0);
}
