#include "lists.h"

/**
<<<<<<< HEAD
 * add_nodeint - adds a node to a singly linked list
 * @head: pointer to head of the list
 * @n: data to store
 * Return: pointer to new elemnt
 */
=======
* add_nodeint - Adds a new node at the beginning
* of a listint_t list.
* @head: A pointer to the address of the
* head of the listint_t list.
* @n: The integer for the new node to contain.
* Return: If the function fails - NULL.
* Otherwise - the address of the new element.
*/

>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

<<<<<<< HEAD
	new = malloc(sizeof(*new));
	if (new)
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}
=======
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e

	return (new);
}
