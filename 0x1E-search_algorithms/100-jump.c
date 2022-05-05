#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in an array using jump search algorithm
 * @array: Array being search
 * @size: Size of array given
 * @value: Value being searched for
 * Return: Index of value in array or -1 on failure
 */

int jump_search(int *array, size_t size, int value)
{
	unsigned int jump = sqrt(size);
	unsigned int i = 0, j = jump;

	if (array != NULL && size >= 1)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		while (j < size && array[i] < value)
		{
			if (array[j] >= value)
				break;
			i += jump;
			j += jump;
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
		}
		if (array[i] > value || i >= size)
			return (-1);
		printf("Value found between indexes [%d] and [%d]\n", i, j);
		if (j > size)
			j = size;
		while (i <= j)
		{
			if (i < size)
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
			i++;
		}
	}
	return (-1);
}

