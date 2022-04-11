#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;

for (a = 0; a <= 89; a++)
{
putchar((a / 10) + '0');
putchar((a % 10) + '0');

if (a % 10 == a / 10)
{
continue;
}

if (a == 89)
{
continue;
}

putchar(',');
putchar(' ');
putchar('\n');

return (0);

}

}
