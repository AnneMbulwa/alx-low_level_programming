#include <stdio.h>
/**
 * main - C program that prints size of various types on computer
 * Return: 0
 */
int main(void)
{
	char v;
	int t;
	long int x;
	long long int y;
	float z;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(v));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(t));
	printf("size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(x));
	printf("size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(y));
	printf("size of a float: %lu bytes(s)\n", (unsigned long)sizeof(z));
	return (0);
}
