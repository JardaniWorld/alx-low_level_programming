#include "lists.h"

/**
 * free_listint - This function frees a singly linked list
 * @head: A pointer variable
 *
 * Return: Nothingto return
 */

void free_listint(listint_t *head)
{
listint_t *temp;

if (head == NULL)
	return;

while (head->next != NULL)
{
temp = head->next;
free(head);
head = temp;
}

free(head);
}
