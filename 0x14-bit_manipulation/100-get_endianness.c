#include "main.h"

/**
 *get_endianness - checks endianness
 *Return: 0 if big or 1 if small
 */
int get_endianness(void)
{
	unsigned long int num = 1;
	char *z;

	z = (char *) &num;
	return (*z);
}
