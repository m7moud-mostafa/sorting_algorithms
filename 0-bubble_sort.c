#include "sort.h"

/**
 * bubble_sort - sorts integer in an array
 *
 * @array: the array to be sorted
 * @size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;
	char is_swaped = 1;

	if (size < 2)
		return;

	for (i = 0; i < size - 1 || is_swaped; i++)
	{
		is_swaped = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				is_swaped = 1;
				tmp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}

		}
	}
}
