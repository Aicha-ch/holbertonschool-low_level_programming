#include "lists.h"

/**
 * insert_dnodeint_at_index -function that inserts a new node at given position
 * @h: pointer to a doubly linked list
 * @idx: given position
 * @n: an integer
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i = 0;
	
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	
	if (*h == NULL)
		return (NULL);
	
	temp = *h;
	
	while (i < idx - 1)
	{
		if (temp == NULL)
			return (NULL);
		i++;
		temp = temp->next;
	}
	
	if (temp != NULL)
	{
		new_node->next = temp->next;
		new_node->prev = temp;
		
		if (new_node->next != NULL)
			(temp->next)->prev = new_node;
		temp->next = new_node;
	}
	return (new_node);
}
