#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list
 * @head: A pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *t;

	if (head == NULL)
		return;
	
	while (*head)
	{
		t = (*head)->next;
		free(*head);
		*head = t;
	}
	*head = NULL;
}

