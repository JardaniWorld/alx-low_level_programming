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

for (a = ; str[a] != '\0'; a++)
{

if (a % 2 == 0)
{
_putchar(str[a]);
}

}
_putchar('\n');

}
