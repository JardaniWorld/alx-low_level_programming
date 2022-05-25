#include "lists.h"

/**
 * print_list - This functioin prints all the elements of a list
 * @h: A list pointer variable
 *
 * Return: All the elements in the list
 */

size_t print_list(const list_t *h)
{
size_t count;
count = 0;

while (h != NULL)
{
if (h->str == NULL)
{
printf("[%d] %s\n", 0, "(nil)");
}
else
{
printf("[%d] %s\n", h->len, h->str)
}

h = h->next;
count++;
}

return (count);
}

