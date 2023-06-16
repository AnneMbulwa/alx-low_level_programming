#include <stdio.h>
/**
 * main - program that prints alphabets in lowercase
 * Return: 0
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstvuwxyz";
	int a;

	for (a = 0; a < 26; a++)
	{
		putchar(alp[a]);
	}
	putchar("\n");
	return (0);
}
