#include "main.h"
/**
 *_memcpy -  function that copies memory area.
 *@dest: memory address copy to
 *@src: memory address copy from
 *@n: number of bytes
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
