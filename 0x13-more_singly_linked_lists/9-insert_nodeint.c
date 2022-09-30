#include "lists.h"

/**
<<<<<<< HEAD
 * insert_nodeint_at_index - adds a node to a singly linked list
 * @h: pointer to head of the list
 * @n: data to store
 * @idx: position to insert
 * Return: pointer to new elemnt
 */
listint_t *insert_nodeint_at_index(listint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *tmp = *h, *head = *h;

	if (!h)
		return (NULL);
	while (head && i < idx)
	{
		tmp = head;
		head = head->next;
		i++;
	}
	if (i < idx)
		return (NULL);
	new = malloc(sizeof(*new));
	if (new)
	{
		new->n = n;
		new->next = head;
		if (tmp == head)
			*h = new;
		else
			tmp->next = new;
	}

=======
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 * list at a given position.
 * @head: A pointer to the address of the
 * head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 * node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 * Return: If the function fails - NULL.
 * Otherwise - the address of the new node.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *copy = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = copy;
		*head = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}

	new->next = copy->next;
	copy->next = new;

>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	return (new);
}
