#include "main.h"
/**
 *reverse_array - function that reverses the content of an array of integers.
 *@a: array of integers
 *@n: number of elements to swap
 *Return: 0
 */
void reverse_array(int *a, int n)
{
	int x;
	int b;

	for (b = 0; b < n; b++)
	{
		n--;
		x = a[b];
		a[b] = a[n];
		a[n] = x;
	}
}
