#include "sort.h"

/**
 * swap_nodes - function swaps two nodes in a listint_t doubly-linked list
 * @h: pointer to the head of the doubly-linked list
 * @n1: pointer to the first node to swap
 * @n2: the second node to swap
 */
void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2)
{
	(*n1)->next = n2->next;
	if (n2->next != NULL)
		n2->next->prev = *n1;
	n2->prev = (*n1)->prev;
	n2->next = *n1;
	if ((*n1)->prev != NULL)
		(*n1)->prev->next = n2;
	else
		*h = n2;
	(*n1)->prev = n2;
	*n1 = n2->prev;
}

/**
 * insertion_sort_list - funct to sort a doubly linked list of ints using
 *		'insertion sort algorithm'
 * @list: pointer to the head of a doubly-linked list of integers
 * DESC.: Prints the list after each swap
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *ints, *insert, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (ints = (*list)->next; ints != NULL; ints = temp)
	{
		temp = ints->next;
		insert = ints->prev;
		while (insert != NULL && ints->n < insert->n)
		{
			swap_nodes(list, &insert, ints);
			print_list((const listint_t *)*list);
			insert = ints->prev;
		}
	}
}
