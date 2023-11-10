#include "main.h"

/**
 *alloc_grid - create grid
 *
 *@width: width
 *
 *@height: height
 *
 *Return: grid
 *
 */
int **alloc_grid(int width, int height)
{
	int **grid1;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid1 = malloc(sizeof(int *) * height);

	if (grid1 == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid1[i] = malloc(sizeof(int) * width);
		if (grid1[i] == NULL)
		{
			for (; i >= 0; i--)
				free(grid1[i]);
			free(grid1);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid1[i][j] = 0;
	}
	return (grid1);
}
