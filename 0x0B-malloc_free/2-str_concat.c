#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - This function concatenates two strings together
 * @s1: The first string
 * @s2: The second string
 *
 * Return: Always 0. (Success)
 */

char *str_concat(char *s1, char *s2)
{
int i, j, k, l, tmp;
int tmp1 = 0;
int tmp2 = 0;
char *ptr;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (i = 0; s1[i] != '\0'; i++)
{
tmp1 = tmp1 + 1;
}
for (j = 0; s2[j] != '\0'; j++)
{
tmp2 = tmp2 + 1;
}
tmp = tmp1 + tmp2;
ptr = malloc(sizeof(char) * tmp + 1)
if (ptr == NULL)
{
return (NULL);
}
for (k = 0; s1[k] != '\0'; k++)
{
ptr[k] = s1[k];
}
for (k = k, l = 0; s2[l] != '\0'; l++, k++)
{
ptr[k] = s2[l];
}
ptr[k] = '\0';
return (ptr);
}
