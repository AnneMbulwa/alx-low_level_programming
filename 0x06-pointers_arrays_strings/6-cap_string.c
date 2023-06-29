#include "main.h"
/**
 *cap_string - function that capitalizes all words of a string.
 *@str: string
 *Return: str (uppercase)
 */
char *cap_string(char *str)
{
	int a = 0;

	while (str[a])
	{
		while (!(str[a] >= 'a' && str[a] <= 'z'))
			a++;
		if (str[a - 1] == ' ' ||
			str[a - 1] == ',' ||
			str[a - 1] == ';' ||
			str[a - 1] == '.' ||
			str[a - 1] == '!' ||
			str[a - 1] == '?' ||
			str[a - 1] == '"' ||
			str[a - 1] == '(' ||
			str[a - 1] == ')' ||
			str[a - 1] == '{' ||
			str[a - 1] == '}' ||
			str[a - 1] == '\t' ||
			str[a - 1] == '\n' ||
			a == 0)
			str[a] -= 32;
		a++;
	}
	return (str);
}
