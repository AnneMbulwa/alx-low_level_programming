#include "main.h"
/**
 **_strcpy - function that copies the string pointed to by src
 *@dest: copy to
 *@src: copy from
 *Return:  the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		src++;
	}
	for (; *src != '\0'; src++)
	{
		*dest = *src;
	}
	*dest = '\0';
	return (dest);
}
