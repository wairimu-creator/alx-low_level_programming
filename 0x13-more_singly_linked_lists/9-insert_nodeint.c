#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the address of the head
 * @n: value to be stored in the new node
 * @idx: index at which the new node should be inserted
 * Return: address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;

	for (i = 0; i < (idx - 1); i++)
	{
		if (current == NULL || current->next == NULL)
			return (NULL);

		current = current->next;
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
