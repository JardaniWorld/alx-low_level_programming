#include "main.h"

/**
 * _strchr - This function locates a character in a string
 * @s: The string
 * @c: The character to be located
 *
 * Return: A pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{

while (*s != '\0')
{

if (*s == c)
{
return (s);
}

++s;
}

if (*s == c)
{
return (s);
}


return (0);
}
