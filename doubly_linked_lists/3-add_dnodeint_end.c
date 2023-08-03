#include "lists.h"
/**
  * add_dnodeint_end - A function that adds a node to the end of linked list
  * @head: pointer to a list_t pointer
  * @n: integer in the node
  *
  * Return: pointer to new element of list, NULL on failure
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;
	current = *head;
	
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == 0)
	{
		return (NULL);
	}
	
	new_node->n = n;
	new_node->next = NULL;
	
	if (*head == 0)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (current->next)
			current = current->next;
		new_node->prev = current;
		current->next = new_node;
	}
	return (new_node);
}
