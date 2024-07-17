#include "search_algos.h"
#include <stdio.h>

/**
* print_array - Prints the current array being searched
* @array: The array to be printed
* @left: The starting index of the array
* @right: The ending index of the array
*/
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
}

/**
* binary_search_exponential - integers using the Binary search algorithm.
* @array: Pointer to the first element of the array to search in.
* @left: Starting index of the subarray to search in.
* @right: Ending index of the subarray to search in.
* @value: Value to search for.
*
* Return: -1 if value is not present or array is NULL.
*/
int binary_search_exponential(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	while (left <= right)
	{
		print_array(array, left, right);
		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}

/**
* exponential_search - aray of integers using the Exponential search algorithm.
* @array: Pointer to the first element of the array to search in.
* @size: Number of elements in the array.
* @value: Value to search for.
*
* Return: -1 if value is not present array is NULL.
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t left, right;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	left = bound / 2;
	right = (bound < size) ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	return (binary_search_exponential(array, left, right, value));
}
