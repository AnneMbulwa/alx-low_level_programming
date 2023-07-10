#include "main.h"
#include <stdlib.h>
/**
 *free_grid - free previous 2 dimensional array
 *@grid: 2 dimendional array
 *@height: height dimension
 *Return: 0
 */
void free_grid(int **grid, int height)
{
	int b;

	for (b = 0; b < height; b++)
	{
		free(grid[b]);
	}
	free(grid);
}
