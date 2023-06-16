#include <stdio.h>
/**
 * main - program that prints alphabets in lowercase
 * Return: 0
 */
int main(void)
{
	char ch;

	printf("Lowercase alphabets:\n");
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar("\n");
	return (0);
}
