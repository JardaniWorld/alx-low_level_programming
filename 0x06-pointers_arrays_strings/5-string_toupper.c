#include "main.h"

/**
 * string_toupper - function changes all lowercase of a string to uppercase
 * @s: String to be modified
 *
 * Return: Always 0. (Success)
 */

char *string_toupper(char *s)
{
int i = 0;

while (*(s + i) != '\0')
{

if (*(s + i) >= 'a' && *(s + i) <= 'z')
{
*(s + i) = *(s + i) - 32;
}

i++;
}

return (s);
}
