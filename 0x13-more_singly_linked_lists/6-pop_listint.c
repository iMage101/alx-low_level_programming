#include "lists.h"

/**
<<<<<<< HEAD
 * pop_listint - removes the head of a list
 * @head: pointer to head
 *
 * Return: data of the head 0 otherwise
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int retval;

	if (!head || !(*head))
		return (0);
	tmp = (*head)->next;
	retval = (*head)->n;
	free(*head);
	*head = tmp;
	return (retval);
=======
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: A pointer to the address of the
 * head of the listint_t list.
 * Return: If the linked list is empty - 0.
 * Otherwise - The head node's data (n).
*/

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
