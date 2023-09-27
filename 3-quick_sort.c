#include "sort.h"

void _qsort(int *i, int low, int high, int size);

/**
 * quick_sort - funct to sort an array of integers in ascending order
 *		using the quicksort algorithm
 * @array: An array of integers
 * @size: The size of the array
 * DESC.: Prints the array after each swap of two elements
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	_qsort(array, 0, size - 1, size);
}

/**
 * _qsort - Sorts a subset of an array of integers in ascending order
 *          using the quicksort algorithm
 * @i: The array of integers
 * @low: The starting index of the subset to sort
 * @high: The ending index of the subset to sort
 * @size: The size of the array
 * DESC.: Prints the array after each swap of two elements
 */
void _qsort(int *i, int low, int high, int size)
{
	int s, r, q, temp;

	if (low < high)
	{
		s = high;
		r = low;
		for (q = low; q < high; q++)
		{
			if (i[q] < i[s])
			{
				if (q != r)
				{
					temp = i[q];
					i[q] = i[r];
					i[r] = temp;
					print_array(i, size);
				}
				r++;
			}
		}
		if (r != s && i[r] != i[s])
		{
			temp = i[r];
			i[r] = i[p];
			i[s] = temp;
			print_array(i, size);
		}
		_qsort(i, low, r - 1, size);
		_qsort(i, r + 1, high, size);
	}
}
