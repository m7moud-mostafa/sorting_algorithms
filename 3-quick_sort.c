#include "sort.h"

/**
 * swap - swaps two elements in array
 *
 * @array: the array
 * @size: size of the array
 * @i: first index
 * @j: second index
 */
void swap(int *array, size_t size, size_t i, size_t j)
{
	int tmp;

	tmp = array[i];
	array[i] = array[j];
	array[j] = tmp;
	print_array(array, size);
}

/**
 * partition - getting the index which parts the array
 *
 * @array: the array
 * @size: size of the array
 * @low: low index
 * @high: high index
 * Return: index
 */
size_t partition(int *array, size_t size, size_t low, size_t high)
{
	int pivot;
	size_t i, j;

	i = low - 1;
	pivot = array[high];
	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			swap(array, size, i, j);
			i++;
		}
	}
	if (high != i + 1)
		swap(array, size, i + 1, high);
	return (i + 1);
}

/**
 * quick_sort_helper - sorts an array of integers
 *
 * @array: the array to be sorted
 * @size: size of the array
 * @low: low index
 * @high: high index
 */
void quick_sort_helper(int *array, size_t size, size_t low, size_t high)
{
	size_t pivot;

	if (low < high)
	{
		pivot = partition(array, size, low, high);
		if (pivot)
			quick_sort_helper(array, size, low, pivot - 1);
		if (pivot + 1 < high - 1)
			quick_sort_helper(array, size, pivot + 1, high);
	}
}


/**
 * quick_sort - sorts an array of integers
 *
 * @array: the array to be sorted
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_helper(array, size, 0, size - 1);
}
