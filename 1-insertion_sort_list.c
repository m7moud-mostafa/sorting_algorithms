#include "sort.h"

/**
 * swap - swaps two nodes in doubly linked list
 *
 * @node2: pointer to the first node
 * @node3: pointer to the second node
 * @list: a pointer to the head of the doubly list
 */
void swap(listint_t *node2, listint_t *node3, listint_t **list)
{
	listint_t *node1, *node4;

	node1 = node2->prev;
	node4 = node3->next;

	node3->prev = node1;
	node2->prev = node3;
	node3->next = node2;
	node2->next = node4;
	if (node4)
		node4->prev = node2;

	if (node1)
		node1->next = node3;
	else
		*list = node3;
}

/**
 * insertion_sort_list - sorts a doubly linked list
 *
 * @list: a pointer to a head of doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *ptr;

	if (!list || !(*list))
		return;

	ptr = (*list)->next;
	while (ptr)
	{
		if (ptr->prev && ptr->n < ptr->prev->n)
		{
			swap(ptr->prev, ptr, list);
			print_list(*list);
		}
		else
			ptr = ptr->next;
	}
}
