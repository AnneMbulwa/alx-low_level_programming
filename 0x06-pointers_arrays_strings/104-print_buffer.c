#include "main.h"
#include <stdio.h>
/**
 *print_buffer - function that prints a buffer.
 *@b: buffer
 *@size: size of buffer
 *Return: no return
 */
void print_buffer(char *b, int size)
{
	int a, c, l;

	if (size <= 0)
		printf("\n");
	else
	{
		for (a = 0; a < size; a += 10)
		{
			printf("%.8x:", a);
			for (c = a; c < a + 10; c++)
			{
				if (c % 2 == 0)
					printf(" ");
				if (c < size)
					printf("%.2x", *(b + c));
				else
					printf(" ");
			}
			printf(" ");
			for (l = a; l < a + 10; l++)
			{
				if (l >= size)
					break;
				if (*(b + l) < 32 || *(b + l) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + l));
			}
			printf("\n");
		}
	}
}
