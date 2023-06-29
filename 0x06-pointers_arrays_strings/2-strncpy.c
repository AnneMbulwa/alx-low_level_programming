#include "main.h"
/**
 *char *_strncpy -  function that copies a string.
 *@dest: copy to
 *@src: copy from
 *@n: computed number
 *Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b = 0;

	while (b < n && src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}
	return (dest);
}
