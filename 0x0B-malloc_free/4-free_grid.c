#include "main.h"

/**
 * free_grid - frees grid memory created
 * @grid: parameter
 * @height: parameter
 * Return: pointer to free memory
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
