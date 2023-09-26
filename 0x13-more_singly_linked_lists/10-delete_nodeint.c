#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node of an index of a linked list
 * @head: a pointer to the head of the listint_t list
 * @index: index of the node to be deleted
 * Return: 1 if successful ; -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int node;
	listint_t *tmp, *copy = *head;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);

	}

	for (node = 0; node < (index - 1); node++)
	{

		if (copy->next == NULL)
		return (-1);

		copy = copy->next;
	}

	tmp = copy->next;
	copy->next = tmp->next;
	free(tmp);
	return (1);
}
