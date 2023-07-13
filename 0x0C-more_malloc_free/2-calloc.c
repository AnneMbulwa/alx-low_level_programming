#include "main.h"
#include <stdlib.h>
/**
 *_calloc - function that allocate the memory of an array
 *@nmemb: array elements
 *@size: size of bytes
 *Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i = 0;


	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);

	if (array == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		array[i] = 0;
		i++;
	}
	return (array);
}
