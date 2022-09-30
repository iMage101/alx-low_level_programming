#include "lists.h"

/**
 * free_list - frees a list
<<<<<<< HEAD
 * @head: pointer to head
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		free(head->str);
		tmp = head->next;
		free(head);
		head = tmp;
=======
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	}
}
