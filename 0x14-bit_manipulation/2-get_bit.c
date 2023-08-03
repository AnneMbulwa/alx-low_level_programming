#include "main.h"

/**
 *get_bit - return the bit at given index
 *@n: number to print binary
 *@index: index
 *Return: value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int num;

	if (index >= sizeof(n) * 8)
		return (-1);
	num = (n >> index) & 1;

	return (num);
}
