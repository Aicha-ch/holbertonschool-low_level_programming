#include "lists.h"
/**
  * add_node - A function that adds a node to the beginning of linked list
  * @head: pointer to a list_t
  * @str: pointer to character
  *
  * Return: pointer to new node
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len = 0;
	
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (str[len])
		len++;
	new->len = len;
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	return (new);
}
