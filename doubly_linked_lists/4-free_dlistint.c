#include "lists.h"

/**
 * free_dlistint - function that frees a listint_t list.
 * @head: A pointer to the head of the list_t list.
 * Return: nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	
	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
