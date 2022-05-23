#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
char ch;
int i;
long int a;
long long int b;
float c;

printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(ch));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(c));

return (0);
}
