#include "main.h"
#include <stdlib.h>
/**
 *_strdup - prints duplicate of array
 *@str: char
 *Return: 0
 */
char *_strdup(char *str)
{
	char *duplicate;
	int len = 0;
	int b = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	duplicate = malloc((len + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);
	for (b = 0; str[b]; b++)
		duplicate[b] = str[b];
	return (duplicate);
}
