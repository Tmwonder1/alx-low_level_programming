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
* recursive_binary - Recursively searches for a value in a sorted array
* @array: Pointer to the first element of the array to search in
* @left: Starting index of the subarray to search in
* @right: Ending index of the subarray to search in
* @value: Value to search for
*
* Return: where value is located, or -1 if value is not present or array  NULL
*/
int recursive_binary(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (left > right)
		return (-1);

	print_array(array, left, right);
	mid = left + (right - left) / 2;

	if (array[mid] == value)
	{
		if (mid == left || array[mid - 1] != value)
			return (mid);
		return (recursive_binary(array, left, mid, value));
	}
	if (array[mid] > value)
		return (recursive_binary(array, left, mid - 1, value));
	return (recursive_binary(array, mid + 1, right, value));
}

/**
* advanced_binary - Searches for a value in a sorted array of integers
* @array: Pointer to the first element of the array to search in
* @size: Number of elements in the array
* @value: Value to search for
*
* Return: or -1 if value is not present or array is NULL
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (recursive_binary(array, 0, size - 1, value));
}
