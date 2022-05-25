#include "lists.h"

/**
 * list_len - This function returns the number of elements
 * in a linked list
 *
 * @h: A list pointer variable
 *
 * Return: The number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
size_t count;
count = 0;

while (h != NULL)
{
h = h->next;
count++;
}

return (count);
}
