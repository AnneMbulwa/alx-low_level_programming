#include "main.h"
/**
 *rot13 -  function that encodes a string
 *@str: input string
 *Return: s value
 */
char *rot13(char *str)
{
	int a, b;
	char *x = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *y = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; x[b] != '\0'; b++)
		{
			if (str[a] ==  x[b])
			{
				str[a] = y[b];
				break;
			}
		}
	}
	return (str);
}
