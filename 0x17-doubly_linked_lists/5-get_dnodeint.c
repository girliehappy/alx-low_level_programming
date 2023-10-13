#include "lists.h"

/**
 * get_dnodeint_at_index - A function returns the nth node
 * of a dlistint_t linked list.
 * @head: The pointer to head of the list
 * @index: The index of the node to search for, starting from 0
 * Return: nth node or null if the node doesn' exist
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int s;
	dlistint_t *tmp;

	s = 0;
	if (head == NULL)
		return (NULL);

	tmp = head;
	while (tmp)
	{
		if (index == s)
			return (tmp);
		s++;
		tmp = tmp->next;
	}
	return (NULL);
}
