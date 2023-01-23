#include "sort.h"

/**
* selection_sort - sorts an array using selection sort algo.
*
* @array: array of integer to sort
* @size: size of the array
*/
void selection_sort(int *array, size_t size)
{
	int min, t, index;
	unsigned int i, j;

	for (i = 0; i < size; i++)
	{
		min = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < min)
			{
				min = array[j];
				index = j;
			}
		}
		if (index != -1)
		{
			t = array[i];
			array[i] = array[index];
			array[index] = t;
			print_array(array, size);
		}
		index = -1;
	}
}
