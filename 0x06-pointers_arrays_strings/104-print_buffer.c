#include "main.h"
#include <stdio.h>
/**
 *print_buffer - function that prints a buffer.
 *@b: buffer
 *@size: size of buffer
 *Return: void
 */
void print_buffer(char *b, int size)
{
	int o, y, z;

	o = 0;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (o < size)
	{
		y = size - o < 10 ? size - o : 10;
		printf("%08x: ", o);
		for (z = 0; z < 10; z++)
		{
			if (z < y)
				printf("%02x", *(b + o + z));
			else
				printf(" ");
			if (z % 2)
			{
				printf(" ");
			}
		}
		for (z = 0; z < y; z++)
		{
			int c = *(b + o + z);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		o += 10;
	}
}
