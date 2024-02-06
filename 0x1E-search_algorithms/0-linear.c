#include "search_algos.h"

/**
 *linear_search - searches for a value in an array of integers
 *using the Linear search algorithm
 *@array: pointer to the first element of an array
 *@size: size of an array
 *@value: value in search
 *Return: index of value or -1 if not found or the array if null
 */
int linear_search(int *array, size_t size, int value)
{
	size_t a = 0;

	if (array == NULL)
		return (-1);
	for (a = 0; a < size; a++)
		if (array[a] == value)
			return (a);
	return (-1);
}
