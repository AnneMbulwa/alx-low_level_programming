#include "main.h"

/*endianess - byte order in which data is stored in computer memory*/
/*types of endianess: big-endian and little-endian*/
/*big-endian - most significant byte is stored at lowest memory address*/
/*little-endian - least significant byte is stored atlowest memory address*/

/**
 *get_endianness - checks endianness
 *Return: 0 if big or 1 if small
 */
int get_endianness(void)
{
	unsigned long int num = 1;
	char *y;

	y = (char *) &num;
	return (*y);
}

