#include "main.h"

/**
 *clear_bit - sets avalue of bits to 0 at given index
 *@n: number converted to binary
 *@index: index starting from 0
 *Return: 1 if success or -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	while (*n & 1UL << index)
	{
		*n ^= 1UL << index;
		index++;
	}
	return (1);
}
