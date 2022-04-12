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

printf("size of a char: %ld byte(s)\n", sizeof(ch));
printf("size of an int: %ld byte(s)\n", sizeof(i));
printf("size of a long int: %ld byte(s)\n", sizeof(a));
printf("size of a long long int: %ld byte(s)\n", sizeof(b));
printf("size of a float: %ld byte(s)\n", sizeof(c));

return (0);
}
