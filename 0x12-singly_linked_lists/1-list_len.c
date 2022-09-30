#include "lists.h"
<<<<<<< HEAD

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: the list
 *
 * Return: the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t elements;

	for (elements = 0; h; h = h->next)
		elements++;

	return (elements);
=======
#include <stdio.h>
#include <stddef.h>

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to linked list
 * Return: number of nodes in linked list
 **/
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);
	if (h->next != NULL)
		return (list_len(h->next) + 1);
	return (1);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
