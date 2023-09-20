#include "sort.h"

/**
 * void selection_sort - a function that sorts an array of integers 
 * in ascending order using the Selection sort algorithm
 *
 * @array: the array
 *
 * @size: the size of the array
 * Return: None
 */

void selection_sort(int *array, size_t size)
{	

	if (array == NULL || size < 2)
		return;

	for (size_t i = 0; i < size - 1; i++)
	{
		size_t min_index = i;

		for (size_t j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
				min_index = j;
		}

		if (min_index !=i)
		{
			int temp = array[i];
			array[i] = array[min_index] = temp;

			print_array(array, size);
		}
	}
}
