#include <stdio.h>
/**
 * main - Program that prints all single digits of base 10
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar((a % 10) + '0');
	}
	putchar('\n');
	return (0);
}
