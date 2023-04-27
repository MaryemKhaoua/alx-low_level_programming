#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int len = 0;

	if (head == NULL || str == NULL)
		return (NULL);
	while (str[len])
		len++;
	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = len;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
