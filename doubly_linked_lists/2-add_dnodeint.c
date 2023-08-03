#include "lists.h"
/**
 * add_dnodeint - Write a function that adds a new node at the beginning.
 * @head: pointer to pointer to list
 * @n: value of the node
 * Return: The adress of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == 0)
	{
		return (NULL);
	}
	
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head)
	{
		(*head)->prev = new_node;
		*head = new_node;
	}
	return (new_node);
}
