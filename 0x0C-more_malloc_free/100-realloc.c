#include "main.h"
#include <stdlib.h>
/**
 *_realloc - reallocates a memory block using malloc
 *@ptr: pointer to previous memory
 *@old_size: size in bytes
 *@new_size: new size in bytes of new memory block
 *Return: pointer of the new memory block allocation
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *arr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		arr = malloc(new_size);
		if (arr == NULL)
			return (NULL);
		return (arr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	arr = malloc(new_size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		arr[i] = ((char *) ptr)[i];
	free(ptr);
	return (arr);
}
