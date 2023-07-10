#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **mat;

	if (width <= 0 || height <= 0)
		return (NULL);
	mat = malloc(height * sizeof(int *));

	if (mat == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		mat[i] = malloc(width * sizeof(int));
		if (mat[i] == 0)
		{
			for (j = 0; j < i; j++)
			{
				free(mat[j]);
			}
			free(mat);
			return (NULL);
		}
		for (j = 0; j < width ;j++)
		{
			mat[i][j] = 0;
		}
	}
	return (mat);
}
