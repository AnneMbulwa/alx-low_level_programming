#include "main.h"
/**
 *_strncpy - function that copies the string pointed to by src
 *@dest: copy to
 *@src: copy from
 *@n: integer
 *Return:  the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
