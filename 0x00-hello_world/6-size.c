#include <stdio.h>
/**
 * main - C program that prints size of various types on computer
 * Return: 0
 */
int main(void)
{
	long long int y;

	printf("size of char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("size of int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
	printf("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
