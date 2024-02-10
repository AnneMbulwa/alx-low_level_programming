#include "search_algos.h"
int x_binary_search(int *array, size_t low, size_t high, int value);
/**
 *exponential_search - searches for a value in a sorted array of
 *integers using the Exponential search algorithm
 *@array: pointer to the first element of the array to search
 *@size: number of elements in array
 *@value: value in search
 *Return: index of value or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t b, low, high;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	b = 1;
	while (b < size && array[b] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", b, array[b]);
		b *= 2;
	}

	low = b / 2;
	high = (b < size) ? b : size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", low, high);

	return x_binary_search(array, low, high, value);
}

/**
 *x_binary_search - searches for a value in a sorted array of integers
 *using the Binary search algorithm
 *@array: pointer to first element in array
 *@low: lowest or least value in array
 *@high: highest value in array
 *@value: value in search
 *Return: index of value or -1 if not found
 */
int x_binary_search(int *array, size_t low, size_t high, int value)
{
	size_t mid, a;

	while (low <= high)
	{
		mid = low + (high - low) / 2;
		printf("Searching in array: ");
		for (a = low; a <= high; ++a)
		{
			printf("%d", array[a]);
			if (a < high)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
