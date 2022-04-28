#include "main.h"

/**
 * _strlen_recursion - This function returns the length of a string
 * @s: String length to be returned
 *
 * Return: Always 0. (Success)
 */

int _strlen_recursion(char *s)
{
if (*s)
{
_strlen_recursion(s - 1);
_putchar (*s);
}
}
