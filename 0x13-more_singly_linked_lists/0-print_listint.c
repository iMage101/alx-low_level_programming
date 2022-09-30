#include "lists.h"
<<<<<<< HEAD

/**
 * print_listint - prints a singly linked list
 * @h: head of the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int retval = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		retval++;
	}
	return (retval);
=======
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the list_t list.
 * Return: The number of nodes in the list_t list.
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
