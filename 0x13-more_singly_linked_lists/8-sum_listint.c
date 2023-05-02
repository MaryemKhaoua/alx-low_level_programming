#include "lists.h"
/**
 * sum_listint - sume of all the data (n) of a linked list
 * @head: pointer
 * Return: sum of all the data (n) values
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
