#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Function prototype
 * Description: Frees a listint_t list.
 * @head: Pointer to pointer to head of linked list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
	return;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;

		free(tmp);
	}
}
