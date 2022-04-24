#include "main.h"

/**
 * string_toupper - function changes all lowercase of a string to uppercase
 * @a: String to be modified
 *
 * Return: Always 0. (Success)
 */

char *string_toupper(char *a)
{
int i = 0;

while (*(a + i))
{

if (*(a + i) >= 'a' && *a <= 'z')
{
*(a + i) -= 32;
}

i++;
}

return (a);
}
