#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - This function returns a pointer to a newly
 * allocated space in memory, which contains a copy of
 * the string given as parameter
 *
 * @str: A string
 * Return: Always 0. (Success)
 */

char *_strdup(char *str)
{
char *ptr;
int i, j;
char tmp = 0;

if (str == NULL)
{
return (NULL);
}

for (i = 0; str[i] != '\0'; i++)
{
tmp = tmp + 1;
}

ptr = malloc(sizeof(char) * tmp + 1);

if (ptr == NULL)
{
return (NULL);
}

for (j = 0; str[j] != '\0'; j++)
{
ptr[j] = str[j];
}

ptr[j] = '\0';

return (ptr);

}
