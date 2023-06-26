#include "main.h"
/**
 * _atoi - function that convert a string to an integer
 *@s: string to be converted
 *Return: int to string
 */
int _atoi(char *s)
{
	int result = 0;
	int a = 0;
	int len;
	int b = 0;
	int c = 0;
	int n = 0;

	while (s[len] != '\0')
		len++;

	while (a < len && b == 0)
	{
		if (s[a] == '-')
			++c;
		if (s[a] >= '0' && s[a] <= '9')
		{
			result = s[a] - '0';
			if (c % 2)
				result = -result;
			n = n * 10 + result;
			b = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
		}
		a++;
	}
	if (b == 0)
		return (0);
	return (d);
}

