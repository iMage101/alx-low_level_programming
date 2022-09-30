#include "main.h"
<<<<<<< HEAD
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: the grid
 * @height: height of the grid
 */
=======
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees 2d array
 * @grid: 2d grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: nothing
 *
 **/
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
<<<<<<< HEAD
		free(grid[i]);
=======
	{
		free(grid[i]);
	}
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	free(grid);
}
