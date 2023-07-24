#include "sort.h"

/**
 * bubble_sort - sorts an array using the bubble sort algorithm
 *
 * @array: the array to sort
 * @size: the size of the array
 *
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	int i = 0, aux = 0, max = 0, swapped = 1;

	if (!array || size < 2)
		return;

	max = size - 1;

	for (; i < max; ++i)
	{
		if (array[i] > array[i + 1])
		{
			aux = array[i];
			array[i] = array[i + 1];
			array[i + 1] = aux;
			swapped = 1;
			print_array(array, size);
		}

		if (swapped == 1 && i == max - 1)
			i = -1, swapped = 0, --max;
	}
}
