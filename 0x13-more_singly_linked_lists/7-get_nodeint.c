#include "lists.h"

/**
 * get_nodeint_at_index - eturns the nth node of a listint_t
 * linked list.
 * @head: first node in the linked list
 * @index: index of the node starting at 0.
 *
 * Return: pointer to the node we're looking for, or NULL
 * if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *temp = head;

	while (temp && a < index)
	{
		temp = temp->next;
		a++;
	}

	return (temp ? temp : NULL);
}
