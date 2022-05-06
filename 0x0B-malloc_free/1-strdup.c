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
int i;
char tmp;

while (str[i] != '\0')
{
tmp = str[i];
i++;
}

if (str == NULL)
{
return (NULL);
}

ptr = malloc(sizeof(char));

ptr = tmp;

return (ptr);

}
