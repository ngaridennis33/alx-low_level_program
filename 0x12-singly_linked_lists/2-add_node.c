#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - Adds a new node at the beginning of list_t list
* @new_head: Address of node
* @str: New node to add
* Return: Address of new element, NULL if it fails
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head_ptr = malloc(sizeof(list_t));
	char *result;
	result = strdup(str);

	size_t length = strlen(result);


	if (*head == NULL)
	{
		return (NULL);
	}
	else
	{
		new_head_ptr->str = strdup(str);
		new_head_ptr->len = length;
		new_head_ptr->next = *head;
		*head = new_head_ptr;
	}

	return *head;
}
