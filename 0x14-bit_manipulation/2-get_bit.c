#include "main.h"

/**
 *get_bit - return the bit at given index
 *@n: number to print binary(base 2)
 *@index: index
 *Description: not allowed to use array, malloc, %, or /.
 *Return: value of bit at index
 * or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int num;

	if (index >= sizeof(n) * 8)
		return (-1);
	num = (n >> index) & 1;

	return (num);
}
