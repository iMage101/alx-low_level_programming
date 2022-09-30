#include "lists.h"
<<<<<<< HEAD

/**
 * listint_len - length of a singly linked list
 * @h: head of the list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int retval = 0;

	while (h)
	{
		h = h->next;
		retval++;
	}
	return (retval);
=======
#include <stdio.h>

/**
* listint_len - Returns the number of elements
* in a linked listint_t list.
* @h: A pointer to the head of the listint_t list.
* Return: The number of elements in the listint_t list.
*/

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
