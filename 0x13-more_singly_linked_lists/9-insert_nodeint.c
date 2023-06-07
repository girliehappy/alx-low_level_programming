#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts a new node in a
 * linked list, at a given position
 * @head: A pointer to the first node in the list
 * @idx: The index where the new node is added
 * @n: The data to insert in the new node
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int p;
	listint_t *new;
	listint_t *tmp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (p = 0; tmp && p < idx; p++)
	{
		if (p == idx - 1)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		else
			tmp = tmp->next;
	}
	return (NULL);
}

