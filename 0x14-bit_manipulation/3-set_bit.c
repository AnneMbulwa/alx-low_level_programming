#include "main.h"

/**
 *set_bit - sets value of bit at given index
 *@n: number to print to binary(base 2)
 *@index: index starting from 0
 *Return: 1 on success or -1 on fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n = (1L << index) | *n;

	return (1);
}
