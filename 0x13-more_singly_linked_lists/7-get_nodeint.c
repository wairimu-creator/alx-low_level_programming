#include "lists.h"

/**
 * get_nodeint_at_index - function that looks for the node of a listint_t list
 * @head: pointer to the head node
 * @index: the index of the node to be located
 * Return: NUL if the node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node = 0;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
