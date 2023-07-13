#include "main.h"
#include <stdlib.h>
/**
 *array_range - creates an array of integers
 *@min: minimum array elements
 *@max: maximum array elements
 *Return: pointer of the newly created array
 */
int *array_range(int min, int max)
{
	int *array;
	int i = 0;

	if (min > max)
		return (NULL);
	array = malloc((max - min) * sizeof(int) + sizeof(int));
	if (array == NULL)
		return (NULL);
	while (min <= max)
	{
		array[i] = min;
		i++;
		min++;
	}

	return (array);
}
