#include "main.h"
/**
 *char *_strncat -  function that concatenates two strings
 *@dest:copy to
 *@src:copy from
 *@n: computed number
 *Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
