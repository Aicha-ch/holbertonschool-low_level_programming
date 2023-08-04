#include "lists.h"

/**
 *delete_dnodeint_at_index - function that deletes the node at index
 *index of a listint_t linked list
 *@head: pointer to pointer
 *@index: the index of the node that should be deleted
 *
 *Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;
	
	if (*head == NULL)
		return (-1);
	while (i < index)
	{
		if (current->next == NULL)
			return (-1);
		i++;
		current = current->next;
	}
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		(current->prev)->next = current->next;
		if (current->next != NULL)
			(current->next)->prev = current->prev;
	}
	free(current);
	return (1);
}
