#include "lists.h"

/**
 * sum_listint - This function returns the sum of all
 * the data (n) of a singly linked list
 *
 * @head: A pointer variable to a linked list
 *
 * Return: The sum of all the n data elements of a list
 */

int sum_listint(listint_t *head)
{
int add;

add = 0;

if (head == NULL)
	return (0);

while (head != NULL)
{
add = add + head->n;
head = head->next;
}

return (add);
}
