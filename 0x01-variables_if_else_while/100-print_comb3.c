#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 0; i < 90; i++)
{
putchar(((i / 10) + '0'));
putchar(((i % 10) + '0'));

if (((i / 10) + 0) == ((i % 10) +0))
{
continue;
}

if (i == 89)
{
continue;
}

putchar(',');
putchar(' ');
}

putchar('\n');
return (0);

}
