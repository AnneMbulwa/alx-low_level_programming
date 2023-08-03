#include "main.h"

/**
 *set_bit - sets value of bit at given index
 *@n: number to print to binary
 *@index: index starting from 0
 *Return: 1 if success or -1 if fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n = (1L << index) | *n;

	return (1);
}
