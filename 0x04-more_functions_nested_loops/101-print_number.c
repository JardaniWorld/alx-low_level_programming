#include "main.h"
#include <stdio.h>

/**
 * print_number - print a number using _putchar() only
 * @n: print int
 * Return: Always 0
 */

void print_number(int n)
{
unsigned int x, i = 1, y;

if (n < 0)
{
_putchar('-');
y = -n;
x = y;
}

else
{
y = n;
x = y;
}

if (n == 0)
{
_putchar('0');
}

else
{
while (x > 9)
{
i *= 10;
x /= 10;
}

while (i > 1)
{
_putchar((y / i)+'0');
y %= i;
i /= 10;
}
_putchar(y + '0');
}

}
