#include "main.h"
/**
 *char *_strcat -  function that concatenates two strings.
 *@dest: copy to
 *@src: copy from
 *Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(dest + a) != '\0')
	{
		a++;
	}
	while (*(src + b) != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
