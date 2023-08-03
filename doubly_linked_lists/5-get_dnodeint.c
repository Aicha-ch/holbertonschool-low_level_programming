#include "lists.h"
/**
 * get_dnodeint_at_index - function that return the nth of a linked list
 * @head: a pointer
 * @index: index of the node
 * Return: the nth node of a listint_t linked list
 * if node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	
	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
