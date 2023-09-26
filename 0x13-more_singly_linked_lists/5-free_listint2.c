#include "lists.h"

/**
 * free_listint - free a listint_t list
 * @head: a pointer to the head of the listint_t list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	while (head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
