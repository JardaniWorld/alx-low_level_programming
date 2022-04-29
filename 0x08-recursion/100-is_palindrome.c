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

if (*s)
{
s++;
return (1 + _strlen_recursion(s));
}

return (0);
}

/**
 * helper_pal - helper function for is_Palindrome
 * @str: A pointer
 * @len: string length
 * @count: iterator for recursion
 *
 * Return: Always 0. (Success)
 */

int helper_pal(char *str, int len, int count)
{
if (count >= len)
{
return (1);
}

if (str[len] == str[count])
{
return (helper_pal(str, len - 1, count + 1));
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
int count = 0;

return (helper_pal(s, len - 1, count));

}
