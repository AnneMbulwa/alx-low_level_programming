#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 *int_index - searches for an integer
 *@array: array
 *@size: size of elements in array
 *@cmp: pointer to function
 *Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
