#include "main.h"

/**
 * _puts - This function prints out a string
 * to the standard output
 * @str: The string to be printed out
 *
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}

_putchar('\n');

}
