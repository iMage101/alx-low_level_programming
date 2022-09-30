#include "lists.h"

/**
<<<<<<< HEAD
 * sum_listint - prints a singly linked list
 * @h: head of the list
 * Return: sum of list data
 */
int sum_listint(listint_t *h)
{
	int retval = 0;

	while (h)
	{
		retval += h->n;
		h = h->next;
	}
	return (retval);
=======
 * sum_listint - Calculates the sum of all the
 * data (n) of a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 * Return: If the list is empty - 0.
 * Otherwise - the sum of all the data.
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
