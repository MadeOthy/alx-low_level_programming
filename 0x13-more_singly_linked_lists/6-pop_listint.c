#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list, and returns
 * the head node's data (n).
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: The head node's data (n), or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
