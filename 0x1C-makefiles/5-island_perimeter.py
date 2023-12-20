#!/usr/bin/python3
"""
island perimeter
"""


def neighbour(grid, y, x):
    """
       number of neighbour finder
    """
    nb = 4

    if (y > 0) and grid[y - 1][x]:
        nb -= 1
    if (x > 0) and grid[y][x - 1]:
        nb -= 1
    if (y < len(grid) - 1) and grid[y + 1][x]:
        nb -= 1
    if (x < len(grid[0]) - 1) and grid[y][x + 1]:
        nb -= 1
    return nb


def island_perimeter(grid):
    """
        find perimeter of island
    """
    peri = 0
    for y in range(len(grid)):
        for x in range(len(grid[0])):
            if grid[y][x] == 1:
                peri += neighbour(grid, y, x)
    return peri
