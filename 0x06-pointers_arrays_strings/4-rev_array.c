#include "main.h"
/**
 *reverse_array - function that reverses the content of an array of integers.
 *@a: array of integers
 *@n: number of elements to swap
 *Return: 0
 */
void reverse_array(int *a, int n)
{
	int rev = a[0];
	int b;

	for (b = 0; b < n; b++)
	{
		n--;
		rev = a[b];
		a[n] = rev;
	}
}
