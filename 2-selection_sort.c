#include "sort.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * selection_sort - sorts an array of integers
 *
 * @array: array of integers
 * @size: the size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;
	int tmp;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = min_idx + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}
		if (min_idx != i)
		{
			tmp = array[i];
			array[i] = array[min_idx];
			array[min_idx] = tmp;
			print_array(array, size);
		}
	}
}
