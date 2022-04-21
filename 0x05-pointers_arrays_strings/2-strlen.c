#include "main.h"

/**
 * _strlen - This function returns the length of a string
 * @s: The string length to be calculated
 *
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
int count = 0;

while (*(s + count) != '\0')
count++;

return (count);
}
