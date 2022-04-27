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

while (*s)
{
if (*s != 'c')
{
s++;
}

else
{
return (s);
}

}

if (c == '\0')
{
return (s);
}

return (NULL);
}
