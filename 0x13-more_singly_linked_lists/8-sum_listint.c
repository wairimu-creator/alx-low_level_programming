#include "lists.h"

/**
 * sum_listint - calculate the sum of all the elements in a listint_t list
 * @head: pointer to the end of the list
 * Return:The result
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
