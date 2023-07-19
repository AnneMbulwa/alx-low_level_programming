#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 *array_iterator -  function that executes a function
 *given as a parameter on each element of an array
 *@size: size of array
 *@action: pointer to function
 *@array: array
 *Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
