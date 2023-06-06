#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked
 * list, and returns the head node’s data (n)
 * @head: pointer to the first element in the linked list
 * Return: The data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *t;

	int numb;

	if (!head || !*head)
		return (0);

	numb = (*head)->n;
	t = (*head)->next;
	free(*head);
	*head = t;

	return (numb);
}

