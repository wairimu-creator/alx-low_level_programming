#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: a pointer to the head node
 * Return: data that was at thehead node
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t  *pop;

	if (head == NULL || *head == NULL)
		return (0);

	pop = *head;
	i = pop->n;
	*head = (*head)->next;
	free(pop);
	return (i);
}
