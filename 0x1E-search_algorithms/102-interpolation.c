#include "search_algos.h"

/**
 *interpolation_search - searches for a value in a sorted array of integers
 *using the Interpolation search algorithm
 *@array: pointer to the first element of the array to search
 *@size: size of array
 *@value: value in search
 *Return: index of value location or -1 if not found or null if array empty
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t lo = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL || size == 0)
		return (-1);
	while (lo <= high && value >= array[lo] && value <= array[high])
	{
		pos = lo + (((double)(high - lo) / (array[high] - array[lo]))
				* (value - array[lo]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] > value)
			high = pos - 1;
		else
			lo = pos + 1;
	}
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
