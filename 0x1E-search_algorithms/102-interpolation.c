#include "search_algos.h"
/**
 * interpolation_search - searches in an array using interpolation search
 * @array : A vector is a one-dimensional array
 * @size : size is the number of elements in array
 * @value : value is the value to search for
 * Return: the first index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid;

	while ((array[high] != array[low]) && (value >= array[low])
			&& (value <= array[high]))
	{
		mid = low + ((value - array[low]) * (high - low) /
			(array[high] - array[low]));
		printf("Value checked array[%d] = [%d]\n", mid, array[mid]);
		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}

	if (value == array[low])
	{
		return (low);
	}
	else
	{
		printf("Value checked array[%d] is out of range\n", value);
		return (-1);
	}
}
