#include "lists.h"
/**
 * get_nodeint_at_index - Entry Function
 * @head: pointer
 * @index: unsigned int
 * Return: pointer to the nth node or NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i;

	for (i = 0; current != NULL && i < index; i++)
		current = current->next;
	if (current == NULL)
		return (NULL);
	else
		return (current);
}
