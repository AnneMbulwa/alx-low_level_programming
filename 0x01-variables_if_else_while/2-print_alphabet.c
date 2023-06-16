#include <stdio.h>
/**
 * main - program that prints alphabets in lowercase
 * Return: 0
 */
int main(void)
{
	char alp[26];
	int a;

	printf("Lowercase alphabets:\n");
	for (a = 0; a < 26; a++)
	{
		putchar(alp[a]);
	}
	putchar("\n");
	return (0);
}
