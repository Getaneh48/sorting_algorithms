#include "sort.h"

#define TRUE 1
#define FALSE 0

/**
* bubble_sort - sort an array using bubble sort algorithm.
*
* @array: integers of array to be sorted
* @size: size of the array
*/

void bubble_sort(int *array, size_t size)
{
	int swaped = TRUE;
	int temp;
	unsigned int i = 0;

	while (swaped)
	{
		swaped = FALSE;

		for (i = 0; i < size; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swaped = TRUE;
				print_array(array, size);
			}
		}
	}
}
