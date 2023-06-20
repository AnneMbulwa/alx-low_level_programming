#include "main.h"
#include <stdio.h>
/**
 *print_to_98 -  prints all natural numbers
 *@n: computed number
 *
 */
void print_to_98(int n)
{
	for (; n <= 98; n++)
	{
		if (n == 98)
		{
			printf("%d\n", n);
			break;
		}
		else
		{
			printf("%d", n);
		}
	}
	for (; n >= 98; n--)
	{
		if (n == 98)
		{
			printf("%d\n", n);
			break;
		}
		else
		{
			printf("%d", n);
		}
	}
}
