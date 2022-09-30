#include "lists.h"

/**
<<<<<<< HEAD
 * reverse_listint - reverses a linked list
 * @h: head of the list
 *
 * Return: pointer to the reversed
 */
listint_t *reverse_listint(listint_t **h)
{
	listint_t *tmp2, *tmp1;

	if (!h || !(*h))
		return (NULL);
	tmp1 = (*h)->next;
	(*h)->next = NULL;
	while (tmp1)
	{
		tmp2 = *h;
		*h = tmp1;
		tmp1 = (*h)->next;
		(*h)->next = tmp2;
	}
	return (*h);
=======
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the address of
 * the head of the list_t list.
 * Return: A pointer to the first node of the reversed list.
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *behind;

	if (head == NULL || *head == NULL)
		return (NULL);

	behind = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = ahead;
	}

	(*head)->next = behind;

	return (*head);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
