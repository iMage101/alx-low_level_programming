#include "lists.h"

/**
<<<<<<< HEAD
 * get_nodeint_at_index - gets a node from a singly linked list
 * @head: pointer to head of the list
 * @index: data to store
 * Return: pointer to new elemnt
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head && i < index)
	{
		i++;
		head = head->next;
	}
=======
 * get_nodeint_at_index - Locates a given node of
 * a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node to locate - indices start at 0.
 * Return: If the node does not exist - NULL.
 * Otherwise - the located node.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	return (head);
}
