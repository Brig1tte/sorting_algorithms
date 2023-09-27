#include "sort.h"

/**
 * swap_int - funct to swap two integers in an array
 * @i: The first integer to swap
 * @j: The second integer to swap
 */
void swap_int(int *i, int *j)
{
	int temp = *i;
	*i = *j;
	*j = temp;
}

/**
 * selection_sort - Sort an array of integers in ascending order
 *		using the selection sort algorithm
 * @array: An array of integers
 * @size: The size of the array
 * DESC.: function to print the array after each swap
 */
void selection_sort(int *array, size_t size)
{
	size_t k, q, min_idx;

	if (array == NULL || size < 2)
		return;

	for (k = 0; k < size - 1; k++)
	{
		min_idx = k;
		for (q = k + 1; q < size; q++)
		{
			if (array[q] < array[min_idx])
				min_idx = q;
		}

		if (min_idx != k)
		{
			swap_int(&array[k], &array[min_idx]);
			print_array(array, size);
		}
	}
}
