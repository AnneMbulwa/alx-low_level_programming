#include "search_algos.h"
#include <math.h>

/**
 *jump_search - searches for a value in a sorted array of
 *integers using the Jump search algorithm
 *@array: pointer to the first element of the array to search
 *@size: size of array
 *@value: value in search
 *Return: index of the value or -1 if  not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a, step, cur, prev;

	if (array == NULL || size == 0)
		return (-1);
	/*getting block size to jump*/
	step = sqrt(size);

	for (prev = cur = 0; cur < size && array[cur] < value;)
	{
		printf("Value checked array[%u] = [%d]\n", cur, array[cur]);
		prev = cur;
		cur += step;
	}
	printf("Value found between indexes [%u] and [%u]\n", prev, cur);

	/*perform a linear search on the block of target value*/
	for (a = prev; a <= cur && a < size; a++)
	{
		printf("Value checked array[%u] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
	}
	return (-1);
}
