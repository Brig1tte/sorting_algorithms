#include "sort.h"

/**
 * swap_int - function to swap two integers in an array
 * @i: first int to swap
 * @j: second int to swap
 * DESC.: swap values of the two ints pointed to by i and j
 */
void swap_int(int *i, int *j)
{
	int temp = *i;

	*i = *j;
	*j = temp;
}

/**
 * bubble_sort - funct to sort an array of ints in ascending order
 * @array: array of ints to sort out
 * @size: size of the array to sort out
 * DESC.: sorting the array of ints in A/O using bubble sort algorithm
 */
void bubble_sort(int *array, size_t size)
{
	size_t k, len = size;
	bool bubble = false;

	if (array == NULL || size < 2)
		return;

	while (bubble == false)
	{
		bubble = true;
		for (k = 0; k < len - 1; k++)
		{
			if (array[k] > array[k + 1])
			{
				swap_int(array + i, array + i + 1);
				print_array(array, size);
				bubble = false;
			}
		}
		len--;
	}
}
