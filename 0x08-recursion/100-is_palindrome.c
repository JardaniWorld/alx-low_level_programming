#include "main.h"

/**
 * _strlen_recursion - This function evaluates the size or
 * length of a string
 *
 * @s: A pointer
 *
 * Return: Always 0. (Success)
 */

int _strlen_recursion(char *s)
{

if (!*s)
{
return (0);
}
return (1 + _strlen_recursion(s++));
}

/**
 * p1 - Palindrome
 * @s: A pointer
 * @l: position
 *
 * Return: Always 0. (Success)
 */

int p1(char *s, int l)
{
if (l < 1)
{
return (1);
}

if (*s == *(s + l))
{
return (p1(s + 1, l - 2));
}

return (0);
}


/**
 * is_palindrome - This function checks if a string is a palindrome
 * @s: A pointer
 *
 * Return: Alwayas 0. (Success)
 */

int is_palindrome(char *s)
{
int len = _strlen_recursion(s);

return (p1(s, len - 1));

return (0);
}
