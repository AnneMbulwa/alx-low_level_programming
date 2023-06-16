#include <stdio.h>
/**
 * main -Program that prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int y;
	char ch;

	for (y = 0; y < 10; y++)
	{
		putchar((y % 10) + '0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
