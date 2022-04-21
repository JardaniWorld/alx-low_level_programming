#include "main.h"
#include <stdio.h>
#include <strlen.h>

/**
 * _strlen - This function returns the length of a string
 * @s: The string length to be calculated
 *
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
int count;
count = 0;

while (s[count] != '\0')
{
count++;
}

return (count);
}
