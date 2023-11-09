#include "main.h"
/**
  *free_grid - free created grid
  *
  *@grid: created grid
  *
  *@height: height of a grid
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
