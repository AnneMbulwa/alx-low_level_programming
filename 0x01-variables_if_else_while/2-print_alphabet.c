#include <stdio.h>
/**
 * main - Program that prints alphabets in lowercase
 * Return: 0
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstvuwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
