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
	size_t i, j, itr_size;
	int *itr;
	int min;
	int min_index;

	itr = array;
	itr_size = size;
	for (j = 0; j < size -2; j++, itr++, itr_size--)
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

		if (min_index)
		{
			itr[min_index] = itr[0];
			itr[0] = min;
			print_array(array, size);
		}

	}
}
