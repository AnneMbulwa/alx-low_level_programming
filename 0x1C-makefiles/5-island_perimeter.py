#!/usr/bin/python3
def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid
    Args:
        grid[0]: water
        grid[1]: land

    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally)
    Grid is rectangular, width and height don’t exceed 100
    """
    perimeter = 0
    s = 0

    for a in range(len(grid)):
        for b in range(len(grid[0])):
            if grid[a][b] == 1:
                s += 1
                if (b > 0 and grid[a][b - 1] == 1):
                    perimeter += 1
                if (a > 0 and grid[a - 1][b] == 1):
                    perimeter += 1
    return s * 4 - perimeter * 2
