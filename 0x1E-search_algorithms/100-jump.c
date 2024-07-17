#include <math.h>
#include <stdio.h>
#include "search_algos.h"

/**
* jump_search - in a sorted array of integers using the Jump search algorithm.
* @array: Pointer to the first element of the array to search in.
* @size: Number of elements in the array.
* @value: Value to search for.
*
* Return: value is located, or -1 if value is not present or array is NULL.
*/
int jump_search(int *array, size_t size, int value)
{
	size_t jump, step, prev;

	if (array == NULL || size == 0)
		return (-1);

	jump = sqrt(size);
	step = 0;
	prev = 0;

	while (step < size && array[step] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		prev = step;
		step += jump;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

	while (prev < size && array[prev] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}

	return (-1);
}
