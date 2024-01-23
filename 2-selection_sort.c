#include "sort.h"

/**
 * selection_sort - function that sorts an array of
 * integers in ascending order using the Bubble sort algorithm
 * @array: Pointer to an array of integers to be sorted.
 * @size: Size of the array.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, temp, min_idx;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}
		temp = array[i];
		array[i] = array[min_idx];
		array[min_idx] = temp;
		print_array(array, size);
	}
}
