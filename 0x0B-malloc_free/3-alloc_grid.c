#include "main.h"
<<<<<<< HEAD
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of array
 * @height: height of array
 *
 * Return: a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **array, i, j;
	int len = width * height;

	if (len <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(array[i]);
			free(array);
=======
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - create a 2d array of ints
 * @width: width of grid
 * @height: height of grid
 * Description: creat a grid, initialize to 0
 * Return: 2d array, NULL if fail
 **/
int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		grid[x] = (int *)malloc(width * sizeof(int));
		if (grid[x] == NULL)
		{
			for (y = 0; y <= x; y++)
				free(grid[y]);
			free(grid);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
			return (NULL);
		}
	}

<<<<<<< HEAD
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			array[i][j] = 0;

	return (array);
=======
	for (y = 0; y < height; y++)
	{
		for (x = 0; x < width; x++)
		{
			grid[y][x] = 0;
		}
	}
	return (grid);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
