#include "lists.h"
<<<<<<< HEAD

/**
 * print_list - prints all the elements of a list_t list.
 * @h: the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			nodes++;
			continue;
		}

		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}

	return (nodes);
=======
/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nelem++;
	}
	return (nelem);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
