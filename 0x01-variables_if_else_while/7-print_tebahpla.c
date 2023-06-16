#include <stdio.h>
/**
 * main - Program that lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar("\n");
	return (0);
}
