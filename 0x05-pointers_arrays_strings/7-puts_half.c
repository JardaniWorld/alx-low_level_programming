#include "main.h"

/**
 * puts_half - This function prints one-halve of a string
 * @str: string to be printed out
 *
 * Return: nothing to return
 */

void puts_half(char *str)
{
int i, last;
i = 0;

while (str[i] != '\0')
{
i++;
}

last = (i + 1) / 2;

for (i = last; str[i]; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
