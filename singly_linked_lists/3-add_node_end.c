#include "lists.h"
/**
 * add_node_end - new node at the end
 * @head: a pointer to the first node in the list
 * @str: pointer to character
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newli;
	list_t *end;
	char *newstr;
	int l = 0;
	
	newli = malloc(sizeof(list_t));
	if (newli == NULL)
	{
		return (NULL);
	}
	
	newstr = strdup(str);
	if (newstr == NULL)
	{
		free(newli);
		return (NULL);
	}
	
	while (str[l])
		l++;
	newli->str = newstr;
	newli->len = l;
	newli->next = NULL;
	
	if (*head == NULL)
		*head = newli;
	else
	{
		end = *head;
		
		while (end->next != NULL)
			end = end->next;
		end->next = newli;
	}
	return (*head);
}
