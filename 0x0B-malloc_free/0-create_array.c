#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - This function creates an array of characters
 * @size: bytes to be allocated
 * @c: An array of characters
 *
 * Return: Always 0. (Success)
 */

char *create_array(unsigned int size, char c)
{
char c[] = "John";
c[0] = 'J';

if (size == 0)
{
return (NULL);
}

else
{
return (create_array);
}

_putchar("\n");
}

/**
 * main - Entry point
 *
 * Return: Always 0. (Success)
 */

int main(void)
{
create_array();

return (0);
}
