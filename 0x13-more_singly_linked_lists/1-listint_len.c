#include "lists.h"

/**
 * listint_len - This function returns the number of elements
 * in a singly linked list
 *
 * @h: A pointer variable to a linked list
 *
 * Return: The number of elements in a link list
 */

size_t listint_len(const listint_t *h)
{
size_t a;
unsigned int countElements;

for (countElements = 0; h != NULL; countElements++)
{
a = h->n;
a++;
}

return (countElements);
}
