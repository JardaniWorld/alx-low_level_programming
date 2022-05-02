#include "main.h"
#include <stdio.h>

/**
 * main - Entry point. This function prints
 * the number of arguments passed to it
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0. (Success)
 */

int main(int argc, char *argv[])
{
(void) argv;
printf("%i\n", argc - 1);

return (0);
}
