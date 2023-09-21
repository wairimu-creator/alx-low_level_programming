#include "lists.h"

/***
 * add_node_end - add a node at the end of the list list_t
 * @head: address of the first element
 * @str: pointer to the string to be printed
 *
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current_node;
	size_t n;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	new_node->len = n;
	new_node->next = NULL;
	current_node = *head;

	if (current_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}
	return (*head);
}
