#include "main.h"

/**
 * puts2 - This function prints out the even numbers
 * from a given set of numbers
 *
 * @str: string pointer
 *
 * Return: nothing to return
 */

void puts2(char *str)
{
int i;

while (str[i] != '\0')
{

if (i % 2 == 0)
{
_putchar(str[i]);
}
i++;
}
_putchar('\n');

}
