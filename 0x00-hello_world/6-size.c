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

printf("Size of a char: %zu byte(s)\n", (unsigned long)sizeof(v));
printf("Size of an int: %zu byte(s)\n", (unsigned long)sizeof(t));
printf("Size of a long int: %zu bytes(s)\n", (unsigned long)sizeof(x));
printf("Size of a long long int: %zu bytes(s)\n", (unsigned long)sizeof(y));
printf("Size of a float: %zu bytes(s)\n", (unsigned long)sizeof(z));
return (0);
}
