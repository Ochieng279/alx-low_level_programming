#include "main.h"
#include <stdlib.h>
/**
 *free_grid - function to free the 2D array
 *@grid: grid to be freed
 *@height: height of the grid
 *Return: always 0
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
