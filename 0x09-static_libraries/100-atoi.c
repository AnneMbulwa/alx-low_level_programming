#include "main.h"
/**
 * _atoi - function that convert a string to an integer
 *@s: string to be converted
 *Return: int to string
 */
int _atoi(char *s)
{
	int result = 0;
	int a = 1, i = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			a *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		result = (result * 10) + (s[i] - '0');
		i++;
	}
	result *= a;
	return (result);
}
