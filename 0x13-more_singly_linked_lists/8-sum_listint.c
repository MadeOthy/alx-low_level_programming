#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data of a listint_t list
 * @head: Pointer to the head of the list
 *
 * Return: The sum of all the data, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
