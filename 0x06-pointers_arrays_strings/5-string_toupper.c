#include "main.h"

/**
 * string_toupper - function changes all lowercase of a string to uppercase
 * @s: String to be modified
 *
 * Return: Always 0. (Success)
 */

char *string_toupper(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
}

}

return (s);
}
