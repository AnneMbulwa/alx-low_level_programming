#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int _isdigit(char *s);
int _strlen(char *s);
/**
 *_isdigit - check numbers are digit
 *@s: string
 *Return: 1 if number is digit
 */
int _isdigit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 *_strlen - check the length of string
 *@s: string
 *Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 *main - function that multiples two positive number
 *@argc: number of arguments
 *@argv: number of array arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int len, len1, len2, digit1, digit2, sum, product;
	int i, j = 0;
	int *result;
	char *num1, *num2;

	num1 = argv[1], num2 = argv[2];
	if (argc != 3 || !_isdigit(num1) || !_isdigit(num2))
	{
		printf("Error\n");
		exit(98);
	}
	len1 = _strlen(num1);
	len2 = _strlen(num2);
	len = len1 + len2 + 1;

	result = calloc(sizeof(int), len);
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = num1[len1] - '0';
		sum = 0;
		for (len2 = _strlen(num2) - 1; len2 >= 0; len2--)
		{
			digit2 = num2[len2] - '0';
			product = digit1 * digit2;
			sum += product + result[len1 + len2 + 1];
			result[len1 + len2 + 1] = sum % 10;
			sum /= 10;
		}
	if (sum > 0)
		result[len1 + len2 + 1] += sum;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			j = 1;
		if (j)
			_putchar(result[i] + '0');
	}
	if (!j)
		_putchar('0');
	_putchar('\n');
	free(result);

	return (0);
}
