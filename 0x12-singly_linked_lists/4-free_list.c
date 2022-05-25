#include "lists.h"

/**
 * free_list - This function frees a linked list
 * @head: A pointer variable
 *
 * Return: Nothing to return
 */

void free_list(list_t *head)
{
list_t *tmp;

if (head == NULL)
{
return;
}

while (head->next != NULL)
{
tmp = head->next;
free(head->str);
free(head);
head = tmp;
}

free(head->str);
free(head);
}
