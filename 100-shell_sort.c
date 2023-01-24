#include "sort.h"
#include <stdio.h>

/**
* swap - swaps to integer values
*
* @a: int value
* @b: int value
*/
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
* shell_sort - sort integers of an array
* using shell sort algorithm.
*
* @array: array of integers.
* @size: size of the array.
*/
void shell_sort(int *array, size_t size)
{
	int gap = 1;
	int j, i;
	int a_size = size;

	while (gap < a_size)
	{
		gap = gap * 3 + 1;
	}

	while (gap >= 1)
	{

		for (j = gap; j < a_size; j++)
		{
			for (i = j - gap; i >= 0; i -= gap)
			{
				if (array[i + gap] > array[i])
				{
					break;
				}
				else
				{
					swap(&array[i + gap], &array[i]);
				}
			}
		}
		if (gap < a_size)
			print_array(array, size);
		gap = gap / 3;
	}
}
