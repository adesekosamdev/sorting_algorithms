#ifndef _SORT_H
#define _SORT_H
#include <stdlib.h>
#include <stdio.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
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
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void swap_ints(int *a, int *b);
void hoare_sort(int *array, size_t size, int left, int right);
void quick_sort_hoare(int *array, size_t size);
int hoare_partition(int *array, size_t size, int left, int right);
void compare_swap_down(int *array_init, int *array, size_t size_init, size_t size, int *flag);
void compare_swap_up(int *array_init, int *array, size_t size_init, size_t size, int *flag);
void bitonic_deep_down(int *array_init, int *array, size_t size_init, size_t size, int *flag);
void bitonic_deep_up(int *array_init, int *array, size_t size_init, size_t size, int *flag);
void bitonic_sort(int *array, size_t size);
/* void print_list_rev(const listint_t *list); */
#endif
