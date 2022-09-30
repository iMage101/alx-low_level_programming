#include "lists.h"
<<<<<<< HEAD

int is_visited2(listint_t *node, listint_t **visited, int count);

/**
 * free_listint_safe - prints a list even with loop
 * @head: pointer to head
 *
 * Return: number of nodes
 */
size_t free_listint_safe(listint_t **head)
{
	listint_t *tmp, *visited[1024];
	int count = 0;

	if (!head)
		return (-1);
	while (*head)
	{
		if (is_visited2(*head, visited, count))
		{
			*head = NULL;
			break;
		}
		visited[count++] = *head;
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	return (count);
}

/**
 * is_visited2 - check if a node is visited
 * @node: pointer to node
 * @visited: list of visited
 * @count: length of visited
 *
 * Return: 1 if is visited and 0 otherwise
 */
int is_visited2(listint_t *node, listint_t **visited, int count)
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
#include <stdlib.h>
#include <stdio.h>

/**
* _ra - reallocates memory for an array of pointers
* to the nodes in a linked list
* @list: the old list to append
* @size: size of the new list (always one more than the old list)
* @new: new node to add to the list
*
* Return: pointer to the new list
*/

listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{

	listint_t **newlist;

	size_t i;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newlist[i] = list[i];
	newlist[i] = new;
	free(list);
	return (newlist);
}

/**
* free_listint_safe - frees a listint_t linked list.
* @head: double pointer to the start of the list
*
* Return: the number of nodes in the list
*/
size_t free_listint_safe(listint_t **head)
{
	size_t i, num = 0;

	listint_t **list = NULL;

	listint_t *next;

	if (head == NULL || *head == NULL)
		return (num);
	while (*head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (*head == list[i])
			{
				*head = NULL;
				free(list);
				return (num);
			}
		}
		num++;
		list = _ra(list, num, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (num);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
