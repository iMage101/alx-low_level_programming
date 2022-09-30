#include "lists.h"

/**
<<<<<<< HEAD
 * free_listint2 - frees a list
 * @head: pointer to head
 */
=======
 * free_listint2 - Frees a listint_t list.
 * @head: A pointer to the address of the
 * head of the listint_t list.
 * Description: Sets the head to NULL.
*/
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
void free_listint2(listint_t **head)
{
	listint_t *tmp;

<<<<<<< HEAD
	if (!head)
		return;
=======
	if (head == NULL)
		return;

>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
<<<<<<< HEAD
=======

	head = NULL;
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
