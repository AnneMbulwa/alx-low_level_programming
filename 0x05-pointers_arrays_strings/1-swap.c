#include "main.h"
/**
 *swap_int - function that swaps the values of two integers.
 *@a: computed number
 *@b: computed number
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
