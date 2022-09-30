#include "lists.h"
<<<<<<< HEAD

/**
 * print_listint_safe - prints a list even with loop
 * @head: pointer to head
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	int count = 0;
	const listint_t *visited[1024];

	while (head)
	{
		if (is_visited(head, visited, count))
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
		visited[count++] = head;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	return (count);
}

/**
 * is_visited - check if a node is visited
 * @node: pointer to node
 * @visited: list of visited
 * @count: length of visited
 *
 * Return: 1 if is visited and 0 otherwise
 */
int is_visited(const listint_t *node, const listint_t **visited, int count)
{
	int i = 0;

	while (i < count)
	{
		if (node == visited[i])
			return (1);
		i++;
	}
	return (0);
=======
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
*/

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}

			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
			}

			return (nodes);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (0);
}
/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 * Return: The number of nodes in the list.
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
