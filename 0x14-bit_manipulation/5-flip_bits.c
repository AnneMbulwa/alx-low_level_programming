#include "main.h"

/**
 *flip_bits - returns number of bit you would like to flip
 *@n: number to cnvert to binary
 *@m: second number
 *Return: number of bits would like to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int num = (sizeof(n) * 8);
	int k = 0;

	while (num--)
	{
		k += (n >> num & 1) != (m >> num & 1);
	}
	return (k);
}
