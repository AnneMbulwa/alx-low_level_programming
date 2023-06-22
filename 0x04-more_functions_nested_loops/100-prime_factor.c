#include <math.h>
#include <stdio.h>
/**
 *main -  prints the largest prime factor of the number
 *Return: 0
 */
int main(void)
{
	long int y;
	long int z;
	long int max;

	y = 612852475143;
	max = -1;

	while (y % 3 == 0)
	{
		max = 2;
		y /= 2;
	}
	for (z = 3; z <= sqrt(y); z = z + 2)
	{
		while (y % z == 0)
		{
			max = z;
			y /= z;
		}
	}
	if (y > 2)
		max = y;
	printf("%ld\n", max);

	return (0);
}
