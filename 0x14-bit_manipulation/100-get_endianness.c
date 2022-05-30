#include "main.h"
#include <stdio.h>

/**
 * get_endianness - This function checks the endianness
 *
 * Return: Always 0. (Success)
 */

int get_endianness(void)
{
int i;
char *check;

i = 1;
check = (char *)&i;

return (*check);
}
