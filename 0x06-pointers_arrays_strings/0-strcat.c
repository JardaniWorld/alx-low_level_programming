#include "main.h"

/**
 * _strcat - This function concatenates two string
 *
 * @dest: one of the strings to be concatenated
 * @src: The second string to be concatenated
 *
 * Return: Always 0. (Success)
 */

char *_strcat(char *dest, char *src)
{
char *tmp;
char concStr;
tmp = &concStr;
concStr = strcpy(*dest, *src);

char str1[10] = "dest";
char str2[10] = "src";
char conc;
char *a, *b, *c;

a = &str1;
b = &str2;

while (*a != '\0')
{
a++;
}

while (*b != '\0')
{
c = strcpy(a, b);
b++;
}

dest = c;

return (dest);

}
