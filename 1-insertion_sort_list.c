#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list in ascending order
 *
 * @list: Pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *key, *prev;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	curr = (*list)->next;

	while (curr != NULL)
	{
		key = curr;
		prev = curr->prev;

		while (prev != NULL && prev->n > key->n)
		{
			if (prev->prev != NULL)
				prev->prev->next = key;
			else
				*list = key;
			if (key->next != NULL)
				key->next->prev = prev;

			prev->next = key->next;
			key->prev = prev->prev;
			key->next = prev;
			prev->prev = key;

			print_list(*list);

			prev = key->prev;
		}
		curr = curr->next;
	}
}
