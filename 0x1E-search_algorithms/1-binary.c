#include "search_algos.h"

/**
 *binary_search - searches for a value in a sorted array of
 *integers using the Binary search algorithm
 *@array: pointer to the first element of the array
 *@size: size of the array
 *@value: value in search
 *Return: index of the value in search or -1 if not found or array is null
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t a;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (a = left; a <= right; a++)
		{
			printf("%d", array[a]);
			if (a < right)
				printf(", ");
		}
		printf("\n");

		a = left + (right - left)/2;
		if (array[a] == value)
			return (a);
		else if (array[a] < value)
			left = a + 1;
		else
			right = a - 1;
	}
	return (-1);
}
