#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2D array of integers
* @width: width of the grid
* @height: height of the grid
*
* Return: pointer to 2D array of integers, or NULL on failure
*/
int **alloc_grid(int width, int height)
{
if (width <= 0 || height <= 0)
return (NULL);

int **grid = (int **)malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);

for (int i = 0; i < height; i++)
{
grid[i] = (int *)malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
for (int j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}

for (int j = 0; j < width; j++)
grid[i][j] = 0;
}

return (grid);
}

