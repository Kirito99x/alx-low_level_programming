#!/usr/bin/python3
"""island perimete measuring function"""


def island_perimeter(grid):
    """return perimiter of island"""
    wdth = len(grid[0])
    hght = len(grid)
    x = 0
    size = 0

    for i in range(hght):
        for j in range(wdth):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    x += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    x += 2
    return size * 4 - x * 2
