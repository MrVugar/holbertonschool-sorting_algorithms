#ifndef SORT_H
#define SORT_H
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

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
void swap(int *xp, int *yp);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void swap1(int arr[], int size, int *p1, int *p2);
int partition(int arr[], int size, int low, int high);
void sort(int arr[], int size, int low, int high);


#endif /* SORT_H */
