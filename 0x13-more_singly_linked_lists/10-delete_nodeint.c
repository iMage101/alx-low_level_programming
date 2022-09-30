#include "lists.h"

/**
<<<<<<< HEAD
 * delete_nodeint_at_index - adds a node to a singly linked list
 * @h: pointer to head of the list
 * @idx: position to delete
 * Return: pointer to new elemnt
 */
int delete_nodeint_at_index(listint_t **h, unsigned int idx)
{
	unsigned int i = 0;
	listint_t *tmp = *h, *head = *h;

	if (!head || !h)
		return (-1);
	if (idx == 0)
	{
		*h = head->next;
		free(head);
		return (1);
	}
	while (head && i < idx)
	{
		tmp = head;
		head = head->next;
		i++;
	}
	if (i < idx)
		return (-1);
	tmp->next = head->next;
	free(head);
=======
 * delete_nodeint_at_index - Deletes the node at a given
 * index of a listint_t list.
 * @head: A pointer to the address of the
 * head of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 * Return: On success - 1.
 * On failure - -1.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *copy = *head;
	unsigned int node;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}

	tmp = copy->next;
	copy->next = tmp->next;
	free(tmp);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	return (1);
}
