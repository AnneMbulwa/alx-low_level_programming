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

	printf("size of char: %lu byte(s)\n", (unsigned long)sizeof(v));
	printf("size of int: %lu byte(s)\n", (unsigned long)sizeof(t));
	printf("size of long int: %lu bytes(s)\n", (unsigned long)sizeof(x));
	printf("size of long long int: %lu bytes(s)\n", (unsigned long)sizeof(y));
	printf("size of float: %lu bytes(s)\n", (unsigned long)sizeof(z));
	return (0);
}
