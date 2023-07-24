#include "sort.h"

/**
 * bubble_sort - a function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * @array: array of integers
 * @size: size of the array
 *
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	int swapped, temp;
	size_t i, j;

	if (!array || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		swapped = 0;
		for (j = 0; j < (size - i - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
			swapped = 1;
		}
		if (!swapped)
		{
			break;
		}
	}
}
