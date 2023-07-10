#include "main.h"
#include <stdlib.h>
/**
 **alloc_grid - returns pointer of two dimensional arrays
 *@width: width
 *@height: height
 *Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(width * sizeof(int));

		if (grid[a] == NULL)
		{
			for (b = 0; b < height; b++)
				free(grid[b]);
			free(grid);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			grid[a][b] = 0;
	}
	return (grid);
}
