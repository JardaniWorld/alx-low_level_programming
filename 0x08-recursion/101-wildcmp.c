#include "main.h"

/**
 * wildcmp - This function compares two strings to determine
 * whether or not they are identical in any way
 *
 * @s1: The first string
 * @s2: The second string
 *
 * Return: Always 0. (Success)
 */

int wildcmp(char *s1, char *s2)
{

if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}

if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}

if (*s2 == '*')
{

if (*(s2 + 1) == '*')
{
return (wildcmp(s1, s2 + 1));
}

if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
{
return (1);
}

}

return (0);
}
