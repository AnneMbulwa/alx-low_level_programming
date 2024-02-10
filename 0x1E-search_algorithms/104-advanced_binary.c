 #include "search_algos.h"

int recurcive_binary_search(int *array, size_t low, size_t high, int value);
/**
 *advanced_binary - searches for a value in a sorted array of integers
 *@array: pointer to the first element in array
 *@size: number of array size
 *@value: valuei in search
 *Return: index of value or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return -1;

	return recurcive_binary_search(array, 0, size - 1, value);
}

/**
 *recurcive_binary_search - recursively searches for value in a sorted array
 *@array: pointer to first element in array
 *@low: lowest element value in array to the left
 *@high: highest element value in array to the right
 *@value: value in search of
 *Return: index of value or -1 if not found
 */
int recurcive_binary_search(int *array, size_t low, size_t high, int value)
{
	size_t mid, a;

	if (low > high)
		return (-1);

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
	{
		if (mid == low || array[mid - 1] != value)
			return (mid);
		else
			return recurcive_binary_search(array, low, mid, value);
	}
	else if (array[mid] < value)
	{
		return recurcive_binary_search(array, mid + 1, high, value);
	}
	else
		return recurcive_binary_search(array, low, mid - 1, value);
}
