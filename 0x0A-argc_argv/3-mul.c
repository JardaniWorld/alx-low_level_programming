#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point. This function multiplies
 * two numbers
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0. (Success)
 */

int main(int argc, char *argv[])
{
int a, b;

if (argc == 3)
{
a = atoi(argv[1]);
b = atoi(argv[2]);

printf("%d\n", a *b);
return (0);
}

printf("Error\n");
return (1);
}
