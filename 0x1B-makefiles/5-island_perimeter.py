#!/usr/bin/python3
"""
returns perimeter of island
"""


def island_perimeter(grid):
    """
    island perimeter
    """
    count = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                count += 4
                if grid[i - 1][j] == 1:
                    count -= 2
                if grid[i][j + 1]:
                    count -= 2
    return count
