#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
int c;
int d = 0;
int e = 0;

while (e < 10 && d < 10)
{
c = 0;
while (c < 10)
{
if (e != d && e < d)
{
if (e != c && c < e)
{
if (d != c && c < d)
{
putchar('0' + e);
putchar('0' + d);
putchar('0' + c);

if (c + d + e != 24)
{
putchar(',');
putchar(' ');
}
}
c++;
}
d++;
}
e++;
}
}
putchar('\n');
return (0);

}
