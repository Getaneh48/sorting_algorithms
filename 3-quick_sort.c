#include "sort.h"

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
* partition- Lomuto partition scheme for quick sort algo.
*
* @arr: array of integers
* @low: lowest index value of the array
* @high: highest index value of the array
* @size: size of the array
*
* Return: int value
*/
int partition(int *arr, int low, int high, size_t size)
{
	int pivot = arr[high];
	int i = (low - 1);
	int j;

	for (j = low; j <= high - 1; j++)
	{

		if (arr[j] <= pivot)
		{
			i++;
			if (arr[i] > arr[j])
			{
				swap(&arr[i], &arr[j]);
				print_array(arr, size);
			}
		}
	}

	if (arr[i + 1] > arr[high])
	{
		swap(&arr[i + 1], &arr[high]);
		print_array(arr, size);
	}

	return (i + 1);
}

/**
* sort - perform the quick sort algoritm on the given array.
*
* @arr: array of integers to be sorted
* @low: lowest index value of the array
* @high: highest index value of the array
* @size: size of the array
*/
void sort(int *arr, int low, int high, size_t size)
{
	int pi;

	if (low < high)
	{
		pi = partition(arr, low, high, size);

		sort(arr, low, pi - 1, size);
		sort(arr, pi + 1, high, size);
	}
}

/**
* quick_sort - handles sorting of the array using quick srot algo.
*
* @array: array of integers
* @size: size of the array
*/
void quick_sort(int *array, size_t size)
{
	sort(array, 0, size - 1, size);
}
