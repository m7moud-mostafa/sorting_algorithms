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
	size_t i;
	size_t j;
	size_t itr_size;
	int *itr;
	int min;
	int min_index;

	if (!array)
		return;

	itr = array;
	itr_size = size;
	for (j = 0; j < size; j++, itr++, itr_size--)
	{
		min = itr[0];
		min_index = 0;
		for (i = 0; i < itr_size; i++)
		{
			if (itr[i] < min)
			{
				min = itr[i];
				min_index = i;
			}
		}

		itr[min_index] = itr[0];
		itr[0] = min;
		print_array(array, size);
	}
}
