#!/usr/bin/python3

"""
Returns the perimeter of the
island described in grid
"""


def island_perimeter(grid):
    """
    Function to calculate an island described in a grid perimeter

    grid is a list of list of integers:
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    """

    final_list = []
    checker = 0

    for i in range(len(grid[0])):
        for x in range(len(grid)):
            if grid[x][i] == 1:
                if grid[x - 1][i] == 1:
                    checker += 1

                if grid[x + 1][i] == 1:
                    checker += 1

                if grid[x][i - 1] == 1:
                    checker += 1

                if x < (len(grid) - 1):
                    if grid[x][i + 1] == 1:
                        checker += 1

            if checker > 0:
                final_list.append(1)
                checker = 0

    perimeter = len(final_list) * 2 + 2

    return (perimeter)
