#!/usr/bin/python3
"""
Island Perimeter problem
"""


def island_perimeter(grid):
    """Calculates the perimeter of an island
    """
    lands = []
    row = 0
    while row < len(grid):
        cell = 0
        while cell < len(grid[row]):
            if grid[row][cell] == 1:
                lands.append((row, cell))
            cell += 1
        row += 1
    filtered_land = []
    for p in lands:
        if (p[0] + 1, p[1]) in lands or (p[0] - 1, p[1]) in\
                lands or (p[0], p[1] + 1) in\
                lands or (p[0], p[1] - 1) in lands:
            if p not in filtered_land:
                filtered_land.append(p)
    if len(lands) == 1:
        filtered_land = lands

    perimeter = 0
    for land in filtered_land:
        perimeter += 4
        try:
            if grid[land[0] + 1][land[1]]:
                perimeter -= 1
        except IndexError:
            pass
        if land[0] != 0 and grid[land[0] - 1][land[1]]:
            perimeter -= 1
        try:
            if grid[land[0]][land[1] + 1]:
                perimeter -= 1
        except IndexError:
            pass
        if land[1] != 0 and grid[land[0]][land[1] - 1]:
            perimeter -= 1

    return perimeter
