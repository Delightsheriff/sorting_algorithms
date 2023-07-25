#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers.
 * @list: entry data
 *
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp, *swap;
	int flag;

	if (list == NULL || *list == NULL)
		return;

	current = (*list)->next;
	while (current != NULL)
	{
		temp = current;
		while (temp->prev != NULL)
		{
			flag = 0;
			if (temp->n < temp->prev->n)
			{
				if (temp->prev->prev != NULL)
					temp->prev->prev->next = temp;
				temp->prev->next = temp->next;
				swap = temp->prev->prev;
				temp->prev->prev = temp;
				if (temp->next != NULL)
					temp->next->prev = temp->prev;
				temp->next = temp->prev;
				temp->prev = swap;
				flag = 1;
				if (temp->prev == NULL)
					*list = temp;
				print_list(*list);
			}
			if (flag == 0)
				temp = temp->prev;
		}
		current = current->next;
	}
}
