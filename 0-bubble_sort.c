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
	size_t i, j;
	int temporal;

	if (size < 2)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temporal = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temporal;
				print_array(array, size);
			}
		}
	}
}
