#include "lists.h"
/**
 * pop_listint - deletes the node head
 * @head: pointer to the first element
 * Return: deleted data or 0 if empty *
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
