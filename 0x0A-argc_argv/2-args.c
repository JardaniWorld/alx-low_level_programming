#include "main.h"
#include <stdio.h>

/**
 * main - Entry point. This function prints out
 * all arguments it receives
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0. (Success)
 */

int main(int argc, char *argv[])
{
int count = 0;

if (argc > 0)
{

while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
}

return (0);
}
