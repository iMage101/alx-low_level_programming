#include "lists.h"

/**
<<<<<<< HEAD
 * free_listint - frees a list
 * @head: pointer to head
 */
=======
 * free_listint - Frees a listint_t list.
 * @head: A pointer to the head of the listint_t list to be freed.
*/
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
