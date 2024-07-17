#include "search_algos.h"
#include <stdio.h>

/**
* print_checked - Prints the checked value at a given position
* @array: Pointer to the first element of the array
* @pos: The position of the checked value
* @size: The size of the array
*
* Return: 1 if position is out of range, otherwise 0
*/
int print_checked(int *array, size_t pos, size_t size)
{
	if (pos >= size)
	{
		printf("Value checked array[%lu] is out of range\n", pos);
		return (1);
	}

	printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
	return (0);
}

/**
* interpolation_search - the Interpolation search algorithm.
* @array: Pointer to the first element of the array to search in.
* @size: Number of elements in the array.
* @value: Value to search for.
*
* Return: located, or -1 if value is not present or array is NULL.
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (array[high] == array[low])
			return (array[low] == value ? (int)low : -1);

		pos = low + (((double)(high - low) / (array[high] - array[low])) *
					 (value - array[low]));

		if (print_checked(array, pos, size))
			return (-1);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	if (low < size && array[low] <= value)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
					 (value - array[low]));
		if (pos >= size)
			printf("Value checked array[%lu] is out of range\n", pos);
	}

	return (-1);
}
