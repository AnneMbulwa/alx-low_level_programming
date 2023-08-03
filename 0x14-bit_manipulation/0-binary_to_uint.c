#include "main.h"
#include <stdio.h>

/**
 *binary_to_uint - converts binary to unsigned int
 *@b: string containg 0 and 1 chars
 *Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int k = 0;

	if (b == NULL)
		return (0);

	while (b[k])
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		decimal = decimal * 2 + (b[k] - '0');
		k++;
	}
	return (decimal);
}
