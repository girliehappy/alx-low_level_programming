#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node of a
 * listint_t linked list
 * @head: The first node in the linked list
 * @index: The index of the node to return
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m = 0;
	listint_t *tmp = head;

	while (tmp && m < index)
	{
		tmp = tmp->next;
		m++;
	}
	return (tmp ? tmp : NULL);
}
