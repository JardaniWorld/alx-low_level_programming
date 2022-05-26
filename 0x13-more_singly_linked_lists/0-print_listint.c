#include "lists.h"

/**
 * print_listint - This function prints out all the
 * elements of a linked list
 *
 * @h: A pointer variable to a linked list
 *
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
unsigned int countNode;

if (h == NULL)
	return (0);

for (countNode = 0; h != NULL; countNode++)
{
printf("%d\n", h->n);
h = h->next;
}

return (countNode);

}
