#include "sort.h"

/**
 * selection_sort - sorts an array using the Selection sort algorithm
 * @array: data entry
 * @size: size of the array
 *
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0, j, minor;
	int temp;

	if (size < 2)
	{
		return;
	}
	while (i < size)
	{
		minor = i;
		j = i + 1;
		while (j < size)
		{
			if (array[j] < array[minor])
				minor = j;
			j++;
		}
		if (i != minor)
		{
			temp = array[i];
			array[i] = array[minor];
			array[minor] = temp;
			print_array(array, size);
		}
		i++;
	}
}
