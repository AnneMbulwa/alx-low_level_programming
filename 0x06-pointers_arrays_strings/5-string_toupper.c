#include "main.h"
/**
 *string_toupper - function that changes all lowercase
 *letters of a string to uppercase
 *@n: pointer
 *Return: char(uppercase)
 */
char *string_toupper(char *n)
{
	int a = 0;

	while (n[a] != '\0')
	{
		if (n[a] >= 'a' && n[a] <= 'z')
			n[a] = n[a] - 32;
	}
	return (n);
}
