#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp_node = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (temp_node == NULL)
			return (-1);
		temp_node = temp_node->next;
	}
	if (temp_node == *head)
	{
		*head = temp_node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		temp_node->prev->next = temp_node->next;
		if (temp_node->next != NULL)
			temp_node->next->prev = temp_node->prev;
	}
	free(temp_node);
	return (1);
}
