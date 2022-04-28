#include "main.h"

/**
 * _strlen_recursion - This function returns the length of a string
 * @s: String length to be returned
 *
 * Return: Always 0. (Success)
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}

else
{
return (1 + _strlen_recursion(s + 1));
}
}
