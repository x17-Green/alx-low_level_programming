#include "main.h"
/**
 * free_grid - Free a memory allocation
 * @grid: Grid
 * @height: Height
 *
 * Return: always
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
