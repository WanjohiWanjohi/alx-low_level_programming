#include "main.h"
/**
*free_grid - Frees up memory allocated previously
*@grid: Pointer to the grid
*@height: The height of the grid
*Return: Void
*/
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
		free(grid[j]);
	free(grid);
}
