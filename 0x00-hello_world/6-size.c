#include <stdio.h>
/**
 * main - C program that prints the size of various types on the computer
 * Return: 0 (success)
 */
int main(void)
{
	printf("Size of a char: %u byte(s)\n", sizeof(char));
	printf("Size of an int: %u byte(s)\n", sizeof(int));
	printf("Size of a long int: %u bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %u bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %u bytes(s)\n", sizeof(float));
	return (0);
}
