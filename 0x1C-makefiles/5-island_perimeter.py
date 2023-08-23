#!/usr/bin/python3
"""function that calculates the perimeter of an island"""


def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in grid.

    Args:
    - grid (list of list of integers): The grid describing the island.

    Returns:
    - int: The perimeter of the island.
    """
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                perimeter += 4  # Initialize with the perimeter of a square

                # Check neighbors
                if i > 0 and grid[i - 1][j] == 1:  # Check above
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:  # Check left
                    perimeter -= 2

    return perimeter
