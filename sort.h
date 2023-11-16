#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
/**
 *struct listint_s - Doubly linked list node
 *
 *@n: Integer stored in the node
 *@prev: Pointer to the previous element of the list
 *@next: Pointer to the next element of the list
 *
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void change_swap(int *array, ssize_t item1, ssize_t item2);
int re_partition(int *array, ssize_t first, ssize_t last, size_t size);
void custom_quick(int *array, size_t size);
listint_t *my_node_swap(listint_t *node, listint_t **list);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
#endif
