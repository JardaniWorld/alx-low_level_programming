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
int a;

while (str[a] != '\0')
{

if (a % 2 == 0)
{
_putchar(str[a]);
}
a++;
}
_putchar('\n');

}
